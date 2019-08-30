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

const int EmpleadoNumeroMax = 100;

using namespace std;

class Empleado {
protected:
	string nombre;
	int numEmple;
	int annoexp;
	double salaBas;
	bool revisable;
public:
	Empleado();
	Empleado(const string& nombre, int annoexp, float salabas, bool revisable);
	string reporteEmpleado();
	string getnombre();
	int getnumEmple();
	int getannoexp();
	double getsalaBas();
	bool getrevisable();

	void setnombre(string);
	void setnumEmple(int&);
	void setannoexp(int);
	void setsalaBas(double);
	void setrevisable(bool);

private:
	int	aumentaSala(const int*);
	static void revisionAlet(bool*);						   //aumentaSala(annoexp:int):double
																// revisionAlet(revisable : bool)void






};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
