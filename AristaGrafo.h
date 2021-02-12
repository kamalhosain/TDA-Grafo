#ifndef ARISTAGRAFO_H_
#define ARISTAGRAFO_H_

template<class K>
class Arista {
private:
	int peso;
    
public:
    // Crea la arista
    Arista(int peso);

    // Destructor
    ~Arista();
	
};

template<class K>
Arista<K>::Arista(int peso){
    this->peso = peso;
}

template<class K>
Arista<K>::~Arista() {
    
}
#endif /* ARISTAGRAFO_H_ */