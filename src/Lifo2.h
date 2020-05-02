#ifndef LIFO2_H
#define LIFO2_H

#include"lib.h"

class Lifo{
        private:
                int *array = nullptr;
                unsigned int tamano;
                unsigned int capacidad;
        public:
                Lifo(unsigned int capacidad_);
                ~Lifo();
                void push(int element);
                void pop();
                void print();
                unsigned int get_size();
                int get_top();
};

#endif
