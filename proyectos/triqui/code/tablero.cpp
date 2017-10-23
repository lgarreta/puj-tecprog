

#include "tablero.h"

Tablero::Tablero (string etiquetas) {
	int k = 0;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			Ficha f (' ', etiquetas [k++]); //"abcdefgh"
			matriz [i][j] = f;
	}
}


void Tablero::dibujarse();
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			Ficha f = matriz [i][j];
			f.dibujarse ();
		}
		cout << endl;
	}
}


Ficha *Tablero::obtenerFicha (char etiqueta) {
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			Ficha f = matriz [i][j];
			if (f.getEtiqueta () == etiqueta)
				return &f;
		}
	}
	return NULL;
}

bool Tablero::verificarTriquiFilas (int &fila){
	if (matriz[0][0].getSimbolo()==matriz[0][1].getSimbolo() &&
		matriz[0][0].getSimbolo()==matriz[0][2].getSimbolo() ) {
		fila = 0;
		return true;
	}
		
	if (matriz[1][0].getSimbolo()==matriz[1][1].getSimbolo() &&
		matriz[1][0].getSimbolo()==matriz[1][2].getSimbolo() ) {
		fila = 1;
		return true;
	}

	if (matriz[2][0].getSimbolo()==matriz[2][1].getSimbolo() &&
		matriz[2][0].getSimbolo()==matriz[2][2].getSimbolo() ) {
		fila = 2;
		return true;
	}

	return false;
}



bool verificarTriquiCols (int &col);
bool verificarTriquiDiagonales (int &diag);		

void Tablero::asignarSimbolo (char etiqueta, char simbolo){
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			Ficha *f = &matriz [i][j];
			if (f->getEtiqueta () == etiqueta) {
				f->setSimbolo (simbolo);
			}
		}
	}
}