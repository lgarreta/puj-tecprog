#include "Tablero.h"
#include "Jugador.h"

/// class Persona -
class Persona : public Jugador {
    // Operations
    public:
        // Solicita a la persona la etiqueta donde dará la jugada y retorna la direccion
        // de la ficha dentro de la matrix que tiene esa etiqueta
        Ficha * nextJugada (Tablero tbl);
};

