#include"LIFO.h"

template <typename T>  

LIFO<T>::LIFO(unsigned int capacidad_):capacidad(capacidad_){
	array = new T[capacidad];
	tamano = 0;
}

template <typename T>

LIFO<T>::~LIFO(){
	delete[] array;
}

template <typename T>

void LIFO<T>::push(T element){
	
	if(tamano + 1 == capacidad){

		T temp[capacidad];
		for(int i = 0; i != capacidad; i++){
			temp[i] = *(array + i);
		}

		capacidad *= 2;
		delete[] array;

		T *array = new T[capacidad];

		for(int i = 0; i != capacidad; i++){
                        *(array + i) = temp[i];
                }
	}

	*(array + tamano) = element;
	tamano++;
}

template <typename T>

void LIFO<T>::pop(){
	tamano--;
}

template<typename T>

void LIFO<T>::print(){
	std::for_each(array, array+tamano, [](T value){std::cout<<value<<" ";});
	std::cout<<std::endl;
}
                
template<typename T>

unsigned int LIFO<T>::get_size(){
	return tamano;
}
                
template<typename T>

T LIFO<T>::get_top(){
	return *(array+tamano-1);
}

