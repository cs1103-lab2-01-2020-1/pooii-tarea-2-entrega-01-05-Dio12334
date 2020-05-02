#ifndef LIFO_H
#define LIFO_H

#include"lib.h"

template <typename T>

class LIFO{
	
	private:
		T *array = nullptr;
		unsigned int tamano;
		unsigned int capacidad;
	public:
		LIFO(unsigned int capacidad_);
		~LIFO();
		void push(T element);
		void pop();
		void print();
		unsigned int get_size();
		T get_top();
};

#endif
