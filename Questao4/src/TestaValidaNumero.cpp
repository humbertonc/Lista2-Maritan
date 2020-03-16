#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{
    //ctor
}

void TestaValidaNumero::validaNumero(int num){
    if(num <= 0)
    throw new ValorAbaixoException;
    else if(num >= 1000)
    throw new ValorMuitoAcimaException;
    else if(num > 100)
    throw new ValorAcimaException;

}
