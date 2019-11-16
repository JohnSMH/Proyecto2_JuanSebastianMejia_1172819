#pragma once
#include "NodoL.h"
#include "Alarma.h"
#include "Recordatorios.h"
#include "Actividad.h"



class Lista
{
public:
	Lista();
	~Lista();
private:
	int NElementos = 0;
	NodoL* Head = nullptr;
	NodoL* End = nullptr;
public:
	void Agregar(Alarma* nodovalor);
	void Agregar(Recordatorios* nodovalor);
	void Agregar(Actividad* nodovalor);
	int  Numerodeelementos();
public:
	int Quitar();
};

