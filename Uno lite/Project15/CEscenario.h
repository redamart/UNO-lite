#pragma once

using namespace System;
using namespace System::Drawing;

public ref class CEscenario {
private:
	int X;
	int Y;
	Bitmap^ bm_world;
public:
	CEscenario(int X, int Y) {
		this->X = X;
		this->Y = Y;
		bm_world = gcnew Bitmap("imagenes/esce.jpg");
	};
	void dibujarfondo(BufferedGraphics ^buffer, int sw, int sh) {

		
		Drawing::Rectangle todaPantalla = Drawing::Rectangle(0, 0, 3100, 1300);
		buffer->Graphics->DrawImage(bm_world, todaPantalla, 0, 0, sw, sh, GraphicsUnit::Pixel);

	}
	void validar() {};
};