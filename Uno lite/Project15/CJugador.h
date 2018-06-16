#pragma once

#include "CCarta.h"



using namespace System;
using namespace System::Drawing;

public ref class CJugador {
private:
	int puntos;
	int turno;
	String^ nombre;
	array<CCarta^> ^cartas;

	//aqui el juagdor tendra sus cartasque se agregan o disminuyen


public:
	CJugador(int puntos, int turno, String^ nombre) {
		this->puntos = puntos;
		this->turno = turno;
		this->nombre = nombre;
		this->cartas = cartas;
	};
	~CJugador() {
		this->puntos = 0;
		this->turno = 0;
		this->nombre = "";
	}
	void setPuntos(int puntos) { this->puntos = puntos; }
	int getPuntos() { return this->puntos; }
	void setTurno(int turno) { this->turno = turno; }
	int getTurno() { return this->turno; }
	void setNombre(String^ nombre) { this->nombre = nombre; }
	String^ getNombre() { return this->nombre; }
	
	void cogerCarta() {};
	void colocarCarta() {};

};
*/