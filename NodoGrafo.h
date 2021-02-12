#ifndef NODOGRAFO_H_
#define NODOGRAFO_H_

const int INDICE_INICIAL = 0;

template<class T>
class NodoGrafo {
private:
	T data;
    int visitado;

public:
    NodoGrafo(T data);
    void setData(T data);
    void setVisitado(int indice);
    T getData();
    bool noFueVisitado();
    ~NodoGrafo()
};

// Crea un nodoGrafo vacio
template<class T>
NodoGrafo<T>::NodoGrafo(T data) {
    this->visitado = INDICE_INICIAL;
    this->data = data;
}

template<class T>
void NodoGrafo<T>::setData(T data) {
    this->data = data;
}

template<class T>
void NodoGrafo<T>::setVisitado(int indice) {
    this->visitado = indice;
}

template<class T>
T NodoGrafo<T>::getData() {
    return this->data;
}

template<class T>
bool NodoGrafo<T>:: noFueVisitado(){
    return this->visitado == 0;
}

template<class T>
NodoGrafo<T>::~NodoGrafo(){
    
}
 
#endif /* NODOGRAFO_H_ */