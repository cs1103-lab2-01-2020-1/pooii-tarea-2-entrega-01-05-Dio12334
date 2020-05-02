#include"Lifo2.h"

Lifo::Lifo(unsigned int capacidad_):capacidad(capacidad_){
	array = new int[capacidad];
	tamano = 0;
}

Lifo::~Lifo(){
	delete[] array;
}

void Lifo::push(int element){
	
	if(tamano + 1 == capacidad){

		int temp[capacidad];
		for(int i = 0; i != capacidad; i++){
			temp[i] = *(array + i);
		}

		capacidad *= 2;
		delete[] array;

		int *array = new int[capacidad];

		for(int i = 0; i != capacidad; i++){
                        *(array + i) = temp[i];
                }
	}

	*(array + tamano) = element;
	tamano++;
}

void Lifo::pop(){
	tamano--;
}

void Lifo::print(){
	std::for_each(array, array+tamano, [](int value){std::cout<<value<<" ";});
	std::cout<<std::endl;
}

unsigned int Lifo::get_size(){
	return tamano;
}               

int Lifo::get_top(){
	return *(array+tamano-1);
}

