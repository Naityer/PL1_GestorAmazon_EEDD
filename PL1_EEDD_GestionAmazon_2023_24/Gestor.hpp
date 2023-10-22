#include <iostream>
#include "Pila.hpp"
#include "Cola.hpp"
//#include "Lista.hpp"
//#include "Arbol.hpp"

#ifndef GESTOR_HPP
#define GESTOR_HPP

class Gestor
{
public:
    Gestor();
    void genera12Pedidos(); // Option A
    void muestraPedidos();  // Option B
    void borraPedidosPila(); // Option C
    void encolarPedidos(); // Option D
    void muestraPedidosSalasAyB(); // Option E
    void muestraPedidosSalasCyD(); // Option F
    void borraPedidosColas(); // Option G
    void enlistarPedidos(); // Option H
    void muestraPedidosEstandar(); // Option I
    void muestraPedidosUrgentes(); // Option J
    void buscarPedidos(); // Option K
    void reiniciar(); // Option L
    ~Gestor();
    
//    PedidosEnPila()
//    PedidosEnestacionA() 
//    PedidosEnestacionB() 
//    PedidosEnestacionC() 
//    PedidosEnestacionD()
//    PedidosEnListaEstandar()
//    PedidosEnListaUrgentes()
//    PedidosEnArbol()
    
private: 

//    bool usadosA[49];
//    bool usadosB[49];
//    bool ocupadasP[99];
//    bool ocupadasS[99];
//    int IDsA[49];
//    int IDsB[49];
//    int habPrimPlanta[99];
//    int habSegPlanta[99];
    Pila* pila;
    Cola* estacionA;
    Cola* estacionB;
    Cola* estacionC;
    Cola* estacionD;
//    Lista* listaA;
//    Lista* listaB;
//    Arbol* arbol;

};

#endif // GESTOR_HPP
