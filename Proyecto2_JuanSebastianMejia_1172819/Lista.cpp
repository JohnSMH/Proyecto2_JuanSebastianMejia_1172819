#include "Lista.h"
#include "NodoL.h"

Lista::Lista()
{
	NElementos = 0;
}

void Lista::Agregar(Alarma* nodovalor) {
	NodoL* Nuevo = new NodoL(nodovalor);
	Nuevo->Siguiente = nullptr;
	

	if (NElementos == 0)
	{
		Head = Nuevo;
	}
	else {
		
		Nuevo->Siguiente = Head;
		Head = Nuevo;
	}
	NElementos++;
}

void Lista::Agregar(Actividad* nodovalor) {
	NodoL* Nuevo = new NodoL(nodovalor);
	Nuevo->Siguiente = nullptr;


	if (NElementos == 0)
	{
		Head = Nuevo;
	}
	else {

		Nuevo->Siguiente = Head;
		Head = Nuevo;
	}
	NElementos++;
}

void Lista::Agregar(Recordatorios* nodovalor) {
	NodoL* Nuevo = new NodoL(nodovalor);
	Nuevo->Siguiente = nullptr;


	if (NElementos == 0)
	{
		Head = Nuevo;
	}
	else {

		Nuevo->Siguiente = Head;
		Head = Nuevo;
	}
	NElementos++;
}

int Lista::Quitar() {
	NodoL* aux = new NodoL();
	aux = Head;


	if (NElementos == 1)
	{
		Head = nullptr;
		End = nullptr;
		NElementos--;
	}
	else {
		Head = Head->Siguiente;
		NElementos--;
	}
	delete aux;
	return 0;

}

int Lista::Numerodeelementos() {
	return NElementos;
}


Lista::~Lista()
{
}


