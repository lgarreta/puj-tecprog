/// class Tablero -
class Tablero {
    // Attributes
protected:
    Ficha[3][3] matrix;
    // Operations
public:
    // Se inicializa con la cadena de etiquetas (e.g. "abcdefghi" o "123456789"
    Tablero (string etiquetas);
    // dibuja el tablero
    dibujarse ();

    // Retorna la direccion de la ficha del tablero que tiene la etiqueta de entrada
    Ficha * obtenerFicha (char etiqueta);

    // verifica si hay triqui en alguna fila y si hay copia el número de la fila al parametro de entrada
    bool verificarTriquiFilas (int & filaTriqui);

    // verifica si hay triqui en alguna columna y si hay copia el número de la columna al parametro de entrada
    bool verificarTriquiCols (int & colTriqui);

    // verifica si hay triqui en alguna diagona y si hay copia el número de la diagonal al parametro de entrada
    bool verificarTriquiDiagonales (inlt & diagTriqu);

	// Asigna el simbolo  a la etiqueta que corresponda en la matriz del triqui
	void asignarSimbolo (char etiqueta, char simbolo);
};

