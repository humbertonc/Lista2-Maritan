#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <string>

using namespace std;
class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();

        MesaDeRestaurante mesas[50];
        void adicionaAoPedido(int m, Pedido p);
        double calculaTotalRestaurante();

    protected:

    private:
};

#endif // RESTAURANTECASEIRO_H
