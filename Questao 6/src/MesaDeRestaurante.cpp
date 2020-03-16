#include "MesaDeRestaurante.h"
#include <string>
using namespace std;
MesaDeRestaurante::MesaDeRestaurante()
{
    for(int i = 0; i < 50; i++){
        pedidos[i].setPreco(0);
    }
}

MesaDeRestaurante::~MesaDeRestaurante()
{
    //dtor
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    int i;

    for(i = 0; pedidos[i].getQuant() != 0; i++){
        if(pedidos[i].getNumero() == p.getNumero()){
            pedidos[i].setQuant(pedidos[i].getQuant() + 1);
            return;
        }
    }
    pedidos[i] = p;
}

void MesaDeRestaurante::zeraPedidos()
{
    int i;

    for(i = 0; pedidos[i].getQuant() != 0; i++){
        pedidos[i].setQuant(0);
    }
}

double MesaDeRestaurante::calculaTotal()
{
    int i;
    double soma = 0;

    for(i = 0; pedidos[i].getQuant() != 0; i++){
        soma += pedidos[i].getQuant()* pedidos[i].getPreco();
    }

    return soma;
}
