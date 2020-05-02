#include"ejercicios.h"
#include"LIFO.cpp"

#include"Sistema.h"

void ejercicio_1(){
	Sistema Rappi;

	Bicicleta a1;

	Camion a2;

	Rappi.agregar_vehiculos(a1);

	Rappi.agregar_vehiculos(a2);

	Usuario juan("Juan", "Jose Deustua 234");

	Rappi.agregar_usuario(juan);

	Orden pedido(123456);

	Producto leche("leche", 19.90);

	pedido.agregar_producto(leche);

	Rappi.agregar_orden(juan, pedido);
	
	juan.trackear_orden(pedido);
}

void ejercicio_2(){
        Lifo lifo_1(10);
        lifo_1.push(10);
        lifo_1.push(11);
        lifo_1.push(39);
        lifo_1.print();
        std::cout<<"El tamano del LIFO es: "<<lifo_1.get_size()<<std::endl;
        std::cout<<"El ultimo valor del LIFO es:"<<lifo_1.get_top()<<std::endl;
        lifo_1.pop();
        lifo_1.print();
}

void ejercicio_3(){
	int arr1[] = {10,11,49,1,89,34,12};
	int tam1 = sizeof(arr1)/sizeof(arr1[0]);

	int arr2[] = {23,267,37,485,36,39,21,11};
	int tam2 = sizeof(arr2)/sizeof(arr2[0]);

	std::list<int> list1(arr1, arr1 + tam1);
	std::list<int> list2(arr2, arr2 + tam2);
	
	std::for_each(list1.cbegin(), list1.cend(), [](int a){std::cout<<a<<" ";});
	std::cout<<std::endl;

        std::for_each(list2.cbegin(), list2.cend(), [](int a){std::cout<<a<<" ";});
        std::cout<<std::endl;

	list1.merge(list2);

        std::for_each(list1.cbegin(), list1.cend(), [](int a){std::cout<<a<<" ";});
        std::cout<<std::endl;

        list1.sort();

        std::for_each(list1.cbegin(), list1.cend(), [](int a){std::cout<<a<<" ";});
        std::cout<<std::endl;

	int tam3 = list1.size();

	int *arr3 = new int[tam3];
	int i = 0;
	for(auto it = list1.begin(); it != list1.end(); it++){
		arr3[i] = *it;
		i++;
	}
	std::cout<<std::binary_search(arr3, arr3+tam3, 3)<<std::endl;
    	
	std::cout<<std::lower_bound(arr3, arr3 + tam3, 11)<<std::endl;	


}

void ejercicio_4(){
	LIFO<char> lifo_1(10);
	lifo_1.push('a');
	lifo_1.push('b');
	lifo_1.push('c');
	lifo_1.print();
	std::cout<<"El tamano del LIFO es: "<<lifo_1.get_size()<<std::endl;
	std::cout<<"El ultimo valor del LIFO es:"<<lifo_1.get_top()<<std::endl;
	lifo_1.pop();
	lifo_1.print();
}

