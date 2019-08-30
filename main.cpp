#include <iostream>
#include "Empleado.h"

int main() {
    Empleado empleado[3];

    empleado[0].setnombre("Mike");
    empleado[0].setannoexp(2);
    empleado[0].setsalaBas(1200000);

	empleado[1].setnombre("lala");
	empleado[1].setannoexp(9);
	empleado[1].setsalaBas(1900000);

	empleado[0].setnombre("Mila");
	empleado[0].setannoexp(3);
	empleado[0].setsalaBas(1600000);

	for (int conta = 0; conta < 4; conta++) {
		std::cout << empleado[conta].reporteEmpleado() << std::endl;
	}

    return 0;
}