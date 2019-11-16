#pragma once
#include "Evento.h"
class Recordatorios : public Evento
{
	int numeroderecordatorios = 0;
	public:
	std::string Texto;
public:
	Recordatorios(int emes, int edia, int ehora, int eminuto, int eprioridad, string texto);
	~Recordatorios();
};

