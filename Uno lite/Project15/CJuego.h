
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
	CJuego() {
		mazo = gcnew CMazo();
		esc = gcnew CEscenario();
		jugadores = gcnew array<CJugador^>(4);
	}

	void Start(BufferedGraphics ^buffer, int sw, int sh) {
		esc->dibujarfondo(buffer, sw, sh);
		mazo->dibujarmazo(buffer);
	}
	void cogercarta() {

	}






	~CJuego() {
	
		}


		
	void penalizar() {};
};