/// class Ficha -
class Ficha {
    // Attributes
    protected:
        char etiqueta;
        char simbolo;
        // Operations
    public:
        // Construye una ficha dado un simbolo inicial y una etiqueta
        // Al inicio el simbolo inicial será ' ' el espacio en blanco
        Ficha (char nuevoSimbolo, char nuevaEtiqueta);

        // Retorna el simbolo de la ficha
        char getSimbolo ();

        // Retorna la etiqueta de la ficha
        char getEtiqueta ();

        // Cambia el simbolo de la ficha por otro.
        setSimbolo (char nuevoSimbolo);

        // Dibuja la ficha (print del simbolo y la etiqueta
        dibujarse ();
};

