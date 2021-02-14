#ifndef GRAFO_H_
#define GRAFO_H_

#include "./Arista.h"
#include "./Vertice.h"
#include "./lista.h"
#include <iostream>

const int CANTIDAD_VERTICES = 8;

template<class T>
class Grafo {
private:
	Arista<T>* matrizDeAyacencia [][]; //relacion entre vertices
    Vertice<T>* matrizDeVertices [][];  //referencia a cada vertice
    
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

    Vertice<K>** floydWarshall();
    
};


template<class T>
Grafo<T>::Grafo(){
    Vertice<T>** matrizDeVertices;
    matrizDeVertices = new T*[CANTIDAD_VERTICES];
    
    for(int i = 0; i < CANTIDAD_VERTICES; i++)
        matrizDeVertices[i] = new T[CANTIDAD_VERTICES];

    Arista<T>** matrizDeAyacencia;
    matrizDeAyacencia = new T*[CANTIDAD_VERTICES];
    
    for(int i = 0; i < CANTIDAD_VERTICES; i++)
        matrizDeAyacencia[i] = new T[CANTIDAD_VERTICES];
    
}

template<class T>
Grafo<T>::~Grafo(){
    for(int i = 0; i < CANTIDAD_VERTICES; i++)
        delete[]matrizDeVertices[i];
    
    delete[]matrizDeVertices;

    for(int i = 0; i < CANTIDAD_VERTICES; i++)
        delete[]matrizDeAyacencia[i];
    
    delete[]matrizDeAdyacencia;
}



#endif /* GRAFO_H_ */