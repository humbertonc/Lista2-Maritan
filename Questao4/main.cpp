#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <exception>
using namespace std;

int main()
{
    int n;
    TestaValidaNumero valida;

    cin >> n;
    try{
    valida.validaNumero(n);
    }catch(ValorAbaixoException abaixo){

        abaixo = ValorAbaixoException();

    }catch(ValorAcimaException acima){

        acima = ValorAcimaException();

    }catch(ValorMuitoAcimaException mtacima){

        mtacima = ValorMuitoAcimaException();

    }
    return 0;
}
