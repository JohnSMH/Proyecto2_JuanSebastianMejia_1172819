#include "Alarma.h"

Alarma::Alarma(int emes, int edia, int ehora, int eminuto, int eprioridad) {
	id = 3000 + numerodealarmas;
	numerodealarmas++;
	mes = emes;
	dia = edia;
	hora = ehora;
	minuto = eminuto;
	prioridad = eprioridad;
}

Alarma::~Alarma() {}
