#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(Paquete* p)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}

Paquete* Pila::extraer()
{
    pnodoPila nodo;
    Paquete* p;
    if(!ultimo)
        return 0;
        
    nodo = ultimo;
    ultimo = nodo->siguiente;
    p = nodo->paquete;
    longitud--;
    delete nodo;
    return p;
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "El contenido de la PILA es: \n" << endl;
    cout << "==========================================================================================================" << endl;
    while(aux) {
        aux->paquete->mostrar();
        aux = aux->siguiente;
    }
}


int Pila::getLongitud()
{
    return this->longitud;
}

void Pila::setLongitud(int v) {
    this->longitud = v;
}

Pila::~Pila()
{
    pnodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}

