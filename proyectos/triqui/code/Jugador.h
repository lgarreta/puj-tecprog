//#include "Tablero.h"
#include <iostream>
using namespace std;

/// class Jugador -
class Jugador {
    // Attributes
    protected:
        char simbolo;
		string nombre;

    // Operations
    public:
        // Constructor del jugador con el simbolo inicial ('X' o 'O')
        Jugador (string nombre, char simboloInicio);

        // Retorna la dirección de la ficha donde dara la siguiente jugada después de analizar el tablero
        Ficha * nextJugada (Tablero Tbl);

        // Retorna el simbolo asignado al inicio ('X' o 'O')
        char getSimbolo ();

		// Retorna el nombre del jugador
		string getNombre ();
};

