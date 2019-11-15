#include <iostream>
#include "Queue.h"

int main(){
	
	Queue<std::string> miFila;
	miFila.push("ESE PINCHE JOTO");
	miFila.push("el mamon");
	miFila.push("PRUEBA");
	std::cout << "tamaño de la fila: " << miFila.size() << '\n';
	
	//std::cout << miFila.front() << ' '; 
	//miFila.pop();

	//std::cout << miFila.front() << ' '; 
	//miFila.pop();

	//std::cout << miFila.front() << ' '; 
	//miFila.pop();

	for(int i = miFila.size(); i > 0; i--){
		std::cout << miFila.front() << ' ' << miFila.size() << '\n'; 
		miFila.pop();
	}

//	std::cout << miFila.front() << ' ' << miFila.size() << '\n'; 
//	miFila.pop();

}

