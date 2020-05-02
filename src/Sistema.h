#ifndef SISTEMA_H
#define SISTEMA_H

#include"lib.h"
#include"Usuario.h"
#include"Orden.h"
#include"camion.h"
#include"Bicicleta.h"


class Sistema{
	private:
		std::vector<Usuario> Usuarios;
		std::vector<Orden> ordenes;
		std::vector<Vehiculo> Vehiculos;

	public:
		Sistema();
		void agregar_usuario(Usuario nuevo);
		void asignar_entrega(Orden a_repartir);
		void agregar_vehiculos(Vehiculo repartidor);
		void agregar_orden(Usuario cliente, Orden nueva);
		~Sistema();
};

#endif
