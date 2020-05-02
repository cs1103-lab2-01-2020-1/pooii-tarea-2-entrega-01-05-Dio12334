#include"Sistema.h"

Sistema::Sistema(){}
void Sistema::agregar_usuario(Usuario nuevo){
	Usuarios.push_back(nuevo);
}
void Sistema::asignar_entrega(Orden a_repartir){
	//	for(auto &x: Vehiculos){
	//	if(x.ocupado == false){
	//		entregas.insert({x,a_repartir});
	//		return;
	//	}
	//}
	//std::cout<<"No hay vehiculos libres"<<std::endl;
	//no funciono 
}
void Sistema::agregar_vehiculos(Vehiculo repartidor){
	Vehiculos.push_back(repartidor);	
}
void Sistema::agregar_orden(Usuario cliente, Orden nueva){
	ordenes.push_back(nueva);
	asignar_entrega(nueva);
	
}
Sistema::~Sistema(){}

