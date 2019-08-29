/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Gaston Berdasco
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>
#include<iostream>

const int EmpleadoNumero = 100;

using namespace std;

class Empleado {
protected:
	string nombre;
	int identificador;
	int numEmple;
	int annoexp;
	double salaBas;
	bool revisable;
public:
	Empleado();
	Empleado(const string& nombre, int annoexp, float salabas, bool revisable);
	string reporteEmpleado();
	string getnombre();
	int getidentificador();
	int getnumEmple();
	int annoexp();
	double salabas();
	bool revisable();






};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
