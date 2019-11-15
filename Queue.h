#include "Node.h"

template <class T>
class Queue {
public:
	Queue();
	~Queue();

	void push(T data);
	void pop();
	T front();
	bool isEmpty();
	int size();

private:
	Node<T>* tail;
	int length; 
};

template <class T>
Queue<T>::Queue() {
	tail = NULL;
	length = 0;
}

template <class T>
Queue<T>::~Queue() {
	if(tail != NULL) {
		Node<T>* aux = tail->getNext();
		tail->setNext(NULL);
		tail = aux;
		while(tail != NULL) {
			tail = tail->getNext();
			delete aux;
			aux = tail;
		}
	}
}

template <class T>
void Queue<T>::push(T data) {
	if(tail == NULL) {
		tail = new Node<T>(data);
		tail->setNext(tail);
	}
	else {
		tail->setNext(new Node<T>(data, tail->getNext()));
		tail = tail->getNext();
	}
	length++;
}

template <class T>
void Queue<T>::pop() {
	Node<T>* aux = tail->getNext();
	if(aux == tail) {
		tail = NULL;
	}
	else {
		tail->setNext(aux->getNext());
	}
	delete aux;
	length--;
}

template <class T>
T Queue<T>::front() {
	return tail->getNext()->getData();
}

template <class T>
int Queue<T>::size() {
	return length;
}

template <class T>
bool Queue<T>::isEmpty() {
	return (tail == NULL);
}

