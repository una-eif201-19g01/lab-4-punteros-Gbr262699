
/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Gaston Berdasco
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

 /*string nombre;
	 int identificador;
	 int numEmple;
	 int annoexp;
	 double salaBas;
	 bool revisable;*/

#include "Empleado.h"

Empleado::Empleado()
{
	nombre = "";
	revisable = 1;
	salaBas = 0;
	annoexp = 0;
	salaBas = 0;
	numEmple = rand() % EmpleadoNumeroMax;


}

Empleado::Empleado(const string& nombre, int annoexp, float salabas, bool revisable)
{
	this->nombre = nombre;
	this->annoexp = annoexp;
	this->salaBas = salabas;
	this->revisable = revisable;





}

string Empleado::getnombre()
{
	return nombre;
}

int Empleado::getnumEmple()
{
	return numEmple;
}

double Empleado::getsalaBas()
{
	return salaBas;
}

bool Empleado::getrevisable()
{
	return revisable;
}

void Empleado::setnombre(string nomb)
{
	nombre = nomb;
}

void Empleado::setnumEmple(int&nuE)
{
	numEmple = nuE;
}

void Empleado::setannoexp(int ann)
{
	annoexp = ann;
}

void Empleado::setsalaBas(double salb)
{
	salaBas = salb;
}



int Empleado::getannoexp()
{
	return annoexp;
}

void Empleado::setrevisable(bool revi)
{
	revisable = revi;
}

int Empleado::aumentaSala(const int* annoexp){
    int aumen = 0;
	int salabs = salaBas;
	

	if ((*annoexp == 1) && (*annoexp < 3)) {
		aumen = salaBas * 1.02;
	}
	else (*annoexp >= 3); {
		aumen = salaBas * 1.02;
	}

	int aumen;
}

void Empleado::revisionAlet(bool* banrevi)
{
	if (rand() % 2 == 0) {
		*banrevi = 1;
	}
	else {
		*banrevi = 0;
	}
}

string Empleado::reporteEmpleado()
{
	string reporte;
	string rando;

	if (getrevisable() == true) {
		rando = "si";
	}
	else {
		rando = "no";

	}
	reporte = "EL empleado #[" + to_string(getnumEmple()) + "] \n\tNombre [" + getnombre()
		+ "] \n\t Experiencia[" + to_string(getannoexp()) + "] \nt salario[" 
		+ to_string(getsalaBas()) + "] \n\tSalario con aumento["
		+ to_string(aumentaSala(&annoexp)) + "] \n\tRevision [" + rando + "]";

	return reporte;
}