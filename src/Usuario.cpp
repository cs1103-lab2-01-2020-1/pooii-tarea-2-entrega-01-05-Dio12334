#include"Usuario.h"


Usuario::Usuario(std::string nom, std::string dir): nombre(nom), direccion(dir){}

std::string Usuario::get_direccion(){
	return direccion;
}

void Usuario::trackear_orden(Orden suya){

	std::cout<<"ovalo higuereta"<<" "<<suya.ip<<std::endl;
}


Usuario::~Usuario(){}

