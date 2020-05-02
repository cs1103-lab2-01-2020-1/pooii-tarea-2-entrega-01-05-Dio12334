#ifndef USUARIO_H
#define USUARIO_H

#include"lib.h"
#include"Orden.h"

class Usuario{
	private:
		std::string nombre;
		std::string direccion;
	public:
		Usuario(std::string nom, std::string dir);
		std::string get_direccion();
		void trackear_orden(Orden suya);
		~Usuario();
};

#endif
