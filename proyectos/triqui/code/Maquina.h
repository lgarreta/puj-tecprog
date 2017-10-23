#include "Tablero.h"
#include "Jugador.h"

/// class Maquina -
class Maquina : public Jugador {
    // Operations
    public:
        // Analiza el tablero y retorna la ficha donde dará su proxima jugada
        Ficha * nextJugada (Tablero tbl);
    };

