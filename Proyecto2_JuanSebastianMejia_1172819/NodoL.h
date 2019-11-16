#pragma once
#include "Evento.h"
#include "Alarma.h"
#include "Actividad.h"
#include "Recordatorios.h"



class NodoL
{
public:
	NodoL* Siguiente;
	
public:
	
public:
	NodoL();
	NodoL(Actividad* nodo);
	NodoL(Recordatorios* nodo);
	NodoL(Alarma* nodo);
	~NodoL();
};

