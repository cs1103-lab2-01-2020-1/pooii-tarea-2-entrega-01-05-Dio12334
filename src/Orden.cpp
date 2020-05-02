#include"Orden.h"

Orden::Orden(int i):ip(i){
	costo = 0;
}

void Orden::agregar_producto(Producto nuevo){
	productos.push_back(nuevo);
	costo += nuevo.get_precio();
}
Orden::~Orden(){}
                
int Orden::get_ip(){
	return ip;
}

void Orden::asignar_direccion(std::string dir){
	direccion = dir;	
}

