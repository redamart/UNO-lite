
#include "CMazo.h"
#include "CJugador.h"
#include "CEscenario.h"



using namespace System;
using namespace System::Drawing;

public ref class CJuego {
private:
	array<CJugador^> ^jugadores;
	CEscenario ^ esc;
	CMazo^ mazo;
public:
	CJuego(array<CJugador^> ^jugadores, CEscenario^ esc, CMazo^ mazo) {
		
	}
	~CJuego() {
	
		}
		
	void penalizar() {};
};