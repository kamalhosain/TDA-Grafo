# TDA-Grafo
Matriz de adyacencia 


Es un TDA contenedor de un conjunto de datos llamados nodos y de un
conjunto de aristas, donde cada una de las cuales se determina mediante un
par de nodos.

Operaciones

Crear grafo.
Esta primitiva genera un grafo vacío.
Precondición: ------
Poscondición: grafo generado vacío

Destruir grafo:
esta primitiva destruye el grafo.
Precondición: que el grafo exista .
Poscondición: recursos liberados

Insertar nodo:
esta primitiva inserta en el grafo un nodo nuevo recibido como argu-
mento.9.2. TDA GRAFO
233
Precondición: que el grafo exista y que el nodo no esté previamente.
Poscondición: el grafo queda modificado por el agregado del nuevo nodo

Insertar arista:
esta primitiva inserta en el grafo una arista nueva recibida como argu-
mento
Precondición: que el grafo exista, que la arista no esté previamente y
que existan en el grafo los nodos origen y destino de la arista.
Poscondición: el grafo queda modificado por el agregado de la nueva
arista

Eliminar nodo:
esta primitiva elimina del grafo un nodo recibido como argumento
Precondición: que el grafo exista y que el nodo a eliminar esté en él y
no tenga aristas incidentes en él.
Poscondición: el grafo queda modificado por la eliminación del nodo

Eliminar arista:
esta primitiva elimina del grafo una arista recibida como argumento
Precondición: que el grafo exista y la arista estén él.
Poscondición: el grafo queda modificado por la eliminación de la arista

Existe arista:
esta primitiva recibe una arista y retorna un valor logico indicando si
la arista existe en el grafo
Precondición: que el grafo exista
Poscondición: arista es un valor válido

Existe nodo:
esta primitiva recibe una arista y retorna un valor logico indicando si
el nodo existe en el grafo.
Precondición: que el grafo exista
Poscondición: nodo es un valor válido

Pueden considerarse también las operaciones correspondientes a los recorri-
dos como básicas en el TDA o bien plantearlas utilizando iteradores para
navegar dentro del contenedor.