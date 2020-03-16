#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <string>

using namespace std;

int main()
{
    RestauranteCaseiro rest1 = RestauranteCaseiro();
    Pedido p1 = Pedido(54, 2, 19.99, "Almoco completo");
    Pedido p2 = Pedido(12, 2, 7.99, "Sobremesa");

    rest1.adicionaAoPedido(1, p1);
    rest1.adicionaAoPedido(1, p2);

    Pedido p3 = Pedido(38, 1, 4.50, "Suco grande");
    Pedido p4 = Pedido(54, 1, 19.99, "Almoco completo");

    rest1.adicionaAoPedido(2, p3);
    rest1.adicionaAoPedido(2, p4);

    cout << "O total arrecado pelo restaurante foi " << rest1.calculaTotalRestaurante() << endl;

    return 0;
}
