#include "NodoL.h"

NodoL::NodoL() {
	Siguiente = nullptr;
	
}


NodoL::NodoL(Actividad* nodo)
{
	Actividad* nodop = nodo;
	Siguiente = nullptr;
	
}

NodoL::NodoL(Recordatorios* nodo) {
	Recordatorios* nodop = nodo;
	Siguiente = nullptr;
}

NodoL::NodoL(Alarma* nodo) {
	Siguiente = nullptr;

	Alarma* nodop = nodo;
}

NodoL::~NodoL()
{
}

