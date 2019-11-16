#pragma once
#include "Evento.h"
class Actividad : public Evento
{
	int numerodeactividades = 0;
public:
	std::string lugar;
	std::string descripcion;
	std::string materiales;
	std::string involucradas;
public:
	Actividad(int emes, int edia, int ehora, int eminuto, int eprioridad, string elugar, string emateriales, string epersonas);
	~Actividad();
};

