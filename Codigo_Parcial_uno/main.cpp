#include <iostream>
#include <funciones_parcial_uno.h>
using namespace std;


int main()
{
    //apartamos memoria dinamica para la matriz 8x8
    char **matriz_patron = new char*[8];
    for (int i = 0; i < 8; ++i) {
        matriz_patron[i] = new char[8];
    }
    cout <<"Imprimir un patron en pantalla"<<endl;
    menu_principal(matriz_patron);

    //se libera la memoria
    for (int i = 0; i < 8; ++i) {
        delete [] matriz_patron[i];
    }
    delete matriz_patron;
    matriz_patron = nullptr;

    return 0;
}
