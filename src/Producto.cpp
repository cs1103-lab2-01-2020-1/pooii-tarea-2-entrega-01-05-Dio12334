#include"Producto.h"

Producto::Producto(std::string nombre, double pre):nombre_p(nombre), precio(pre){

}

double Producto::get_precio(){
	return precio;
}

Producto::~Producto(){

}

