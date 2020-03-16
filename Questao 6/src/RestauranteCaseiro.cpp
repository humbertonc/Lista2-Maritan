#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double soma = 0;

    for(int i = 0; i < 50; i++){
        soma += mesas[i].calculaTotal();
    }
    return soma;
}

void RestauranteCaseiro::adicionaAoPedido(int m, Pedido p)
{
    mesas[m - 1].adicionaAoPedido(p);
}
