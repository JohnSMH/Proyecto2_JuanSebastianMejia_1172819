#include "Recordatorios.h"

Recordatorios::Recordatorios(int emes, int edia, int ehora, int eminuto, int eprioridad, string etexto) {
	id = 2000+numeroderecordatorios;
	numeroderecordatorios++;
	mes = emes;
	dia = edia;
	hora = ehora;
	minuto = eminuto;
	prioridad = eprioridad;
	Texto = etexto;
}

Recordatorios::~Recordatorios() {}
