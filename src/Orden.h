#ifndef ORDEN_H
#define ORDEN_H

#include"Producto.h"



class Orden{
	private:
		int ip;
		std::string direccion;
		std::list<Producto> productos;
		double costo;

		friend class Usuario;
	public:
		Orden(int i);
		void agregar_producto(Producto nuevo);
		int get_ip();
		void asignar_direccion(std::string dir);
		~Orden();

};

#endif
