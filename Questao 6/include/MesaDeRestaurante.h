#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <string>

using namespace std;
class MesaDeRestaurante
{
    public:
        Pedido pedidos[50];

        MesaDeRestaurante();
        virtual ~MesaDeRestaurante();
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaTotal();

    protected:

    private:
};

#endif // MESADERESTAURANTE_H
