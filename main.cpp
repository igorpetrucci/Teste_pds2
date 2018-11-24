#include <iostream>
#include "Openarquivo.h"

using std::cout;
using std::endl;

int main(){

    Openarquivo t;
    t.Abrearquivo();
    t.Contagemlinhas();
    t.Tratamento();
    t.AnalisaValores();
    //t.Mostraarquivo();
    t.Fechaaquivo();

    return 0;
}
