#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main(){

    ifstream arquivo;
    ofstream arquivo_bkp;
    string linha;
    arquivo.open("teste.txt");
    arquivo_bkp.open("teste_bkp.txt");

    while(!arquivo.eof()){
    cout<< "dentro" << endl;
    getline(arquivo,linha);
    arquivo.close();
    //arquivo.ignore();
    //arquivo_bkp << linha << endl;
    }
    arquivo.close();
    arquivo_bkp.close();
    return 0;
}
