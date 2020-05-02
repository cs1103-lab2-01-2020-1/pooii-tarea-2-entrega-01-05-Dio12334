#ifndef PRODUCTO_H
#define PRODUCTO_H

#include"lib.h"

class Producto{
	private:
		std::string nombre_p;
		double precio;
	public:
		Producto(std::string nombre, double pre);
		double get_precio();
		~Producto();

};

#endif
