#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

using namespace std;
class Pedido
{
    public:
        Pedido(int n, int q, double p, string d);
        Pedido();
        virtual ~Pedido();

        void setNumero(int n);
        void setQuant(int q);
        void setPreco(double p);
        void setDesc(string d);

        int getNumero();
        int getQuant();
        double getPreco();
        string getDesc();

    protected:

    private:
        int numero, quantidade;
        double preco;
        string descricao;

};

#endif // PEDIDO_H
