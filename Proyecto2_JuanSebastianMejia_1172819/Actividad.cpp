#include "Actividad.h"

Actividad::Actividad(int emes, int edia, int ehora, int eminuto, int eprioridad, string elugar, string emateriales, string epersonas) {
	id = 1000 + numerodeactividades;
	numerodeactividades++;
	mes = emes;
	dia = edia;
	hora = ehora;
	minuto = eminuto;
	prioridad = eprioridad;
	lugar = elugar;
	materiales = emateriales;
	involucradas = epersonas;
}


Actividad::~Actividad() {}
