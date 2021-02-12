#ifndef NODOGRAFO_H_
#define NODOGRAFO_H_

template<class T>
class NodoGrafo {
private:
	T data;

public:
    NodoGrafo(T data);
    void setData(T data);
    T getData();
    ~NodoGrafo()
};

// Crea un nodoGrafo vacio
template<class T>
NodoGrafo<T>::NodoGrafo(T data) {
    this->data = data; 
}

template<class T>
void NodoGrafo<T>::setData(T data) {
    this->data = data;
}

template<class T>
T NodoGrafo<T>::getData() {
    return this->data;
}

template<class T>
NodoGrafo<T>::~NodoGrafo(){
    
}
 
#endif /* NODOGRAFO_H_ */