#ifndef GRAFO_H_
#define GRAFO_H_

#include "./NodoGrafo.h"
#include <iostream>

template<class K>
class Grafo {
private:
	NodoGrafo<K> matrizDeAyacencia [][];

public:
    //Crea un grafo vacio
    Grafo();

    //Destructor
    ~Grafo();

    //Inserta en el grafo el nodo recibido como argumento
    //PRE: Grafo != null 
    //POS: Se inserta el nuevo nodo en el grafo.
    insertarNodo(T data);
    
    //Inserta en el grafo la arista recibida como argumento
    //PRE: Grafo != null 
    //POS: Se inserta la arista al grafo.
    insertarArista(int peso);

    //Elimina del grafo un nodo recibido como argumento
    //PRE: Grafo != null.
    //POS: El grafo queda modificado por la eliminación de la arista
    eliminarNodo();

    //Elimina del grafo una arista recibida como argumento
    //PRE: Grafo != null.
    //POS: El grafo queda modificado por la eliminación de la arista
    eliminarArista();

    //Recibe una arista y retorna un valor logico indicando si la arista existe en el grafo
    //PRE: Grafo != null
    //POS: arista es un valor válido
    existeArista();
    
    //Recibe una arista y retorna un booleano indicando si el nodo existe o no en el grafo.
    //PRE: Grafo != null
    //POS: nodo es un valor válido
    existeNodo();

    
};

#endif /* GRAFO_H_ */