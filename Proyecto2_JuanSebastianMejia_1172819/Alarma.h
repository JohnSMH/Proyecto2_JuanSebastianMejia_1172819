#pragma once
#include "Evento.h"
class Alarma : public Evento
{
	int numerodealarmas=0;
	bool sonar;
public:
	Alarma(int emes, int edia, int ehora, int eminuto, int eprioridad);
	~Alarma();
};

