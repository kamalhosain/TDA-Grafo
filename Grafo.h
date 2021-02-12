#ifndef GRAFO_H_
#define GRAFO_H_

#include "./NodoGrafo.h"
#include "./lista.h"
#include <iostream>

const int CANTIDAD_FILAS = 8;
const int CANTIDAD_COLUMNAS = 8;

template<class T>
class Grafo {
private:
	NodoGrafo<T>* matrizDeAyacencia [][];

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
    
    // Recorrido en anchura
    void BFS();

    
};




template<class T>
void Grafo<T>::BFS() {

    for (int i = 0; i < CANTIDAD_FILAS; i++) {
        for (int j = 0; j < CANTIDAD_COLUMNAS; j++) {
            this->matrizDeAyacencia[i][j]->setVisitado(0);
        }
    }

    int indice = 1;
    Lista<NodoGrafo*> *lista = new Lista<NodoGrafo*>();

    int m = 0;
    int n = 0;

    NodoGrafo<K>* vertice = this->matrizDeAyacencia[m][n];
    while(vertice->noFueVisitado()) {
        vertice->setVisitado(indice);
        indice++;

    }
        
}


#endif /* GRAFO_H_ */