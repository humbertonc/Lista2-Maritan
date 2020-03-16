#include "Pedido.h"
#include <string>
using namespace std;
Pedido::Pedido(int n, int q, double p, string d)
{
    numero = n;
    if(q > 0){
        quantidade = q;
    }else{
        quantidade = 0;
    }
    if(p > 0){
        preco = p;
    }else{
        preco = 0;
    }
    descricao = d;
}
Pedido::Pedido()
{

}

Pedido::~Pedido()
{
    //dtor
}

void Pedido::setQuant(int q)
{
    quantidade = q;
}

void Pedido::setPreco(double p)
{
    preco = p;
}

void Pedido::setNumero(int n)
{
    numero = n;
}

void Pedido::setDesc(string d)
{
    descricao = d;
}

string Pedido::getDesc()
{
    return descricao;
}

int Pedido::getNumero()
{
    return numero;
}

int Pedido::getQuant()
{
    return quantidade;
}

double Pedido::getPreco()
{
    return preco;
}
