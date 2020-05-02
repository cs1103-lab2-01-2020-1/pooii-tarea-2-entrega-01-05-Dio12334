#ifndef VEHICULO_H
#define VEHICULO_H

#include"lib.h"
#include"Orden.h"

class Vehiculo{
	protected:
		bool ocupado;
	
		friend class Sistema;
	public:
		Vehiculo();
		void ocupar();
		~Vehiculo();
	
};


#endif
