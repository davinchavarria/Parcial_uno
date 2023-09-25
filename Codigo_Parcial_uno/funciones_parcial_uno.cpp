#include "funciones_parcial_uno.h"
#include <iostream>
using namespace std;

void menu_principal(char** matriz){//menu principal
    int opcion = 2;
    cout<<"---------------MENU------------------"<<endl;
    cout<<"Escriba el numero de la opcion segun sea el caso"<<endl;
    cout<<"1. Dibujar un patron"<<endl;
    cout<<"2. Verificar funcionamiento de la matriz"<<endl;
    cout<<"3. Terminar ejecucion"<<endl;
    cout<<"-------------------------------------"<<endl;
    opcion = validacion_opcion(1,3);
    if (opcion == 1){
        //dibujar patron
        dibujar_patron(matriz);
        menu_principal(matriz);//volver al menu principal
    }
    else if (opcion == 2){//verificar que la matriz este funcionando
        verificacion(matriz);
        imprimir_patron(matriz);//imprimir la matriz
        menu_principal(matriz);//volver al menu principal
    }
    else{
        //Terminar ejecucion
        cout<<"---------------------------------"<<endl;
        cout<<"El programa se finalizo con exito"<<endl;
        cout<<"---------------------------------"<<endl;
    }
}
void patron_uno(char** matriz){//funcion para el patron uno
    int j = 3, v = 5,n = 3 ;

    // Inicializar la matriz con '0'
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = '0';
        }
    }

    // Llenar el rombo utilizando ciclos

    for (int i = 0, b = 7; i < 4; i++, b--) {
        while (j != v){
            matriz[i][j] = '1';
            matriz[b][j] = '1';
            j+=1;
        }
        v+=1;//cantidad de iteraciones por fila
        j-=n;//iterador
        n+=2;//posicion de inicio para cada fila

    }

}

void patron_dos(char** matriz){
    //llenamos la matriz de ceros
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = '0';
        }
    }
    // Dibujar la "X" en la matriz
    for (int i = 0; i < 8; i++) {
        matriz[i][i] = '1';             // Diagonal superior izquierda a inferior derecha
        matriz[i][8 - 1 - i] = '1'; // Diagonal superior derecha a inferior izquierda
    }
}
void patron_tres(char** matriz){
    int j = 0;

    // Inicializar la matriz con '0'
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = '0';
        }
    }

    // Llenar la figura de unos

    for (int i = 0; i < 4; i++) {//dividi el patron en dos
        j = 0;
        while (j != 8){//iterador de la pocision de las columnas

            if ((i==2) or (i==3)){//verificar dos ultimas filas

                matriz[i][j] = '1';
                matriz[i+4][j] = '1';
                matriz[i][0] = '0';//corrige la primera posicion
                matriz[i+4][0] = '0';
                if ((j == 2) or (j==5)){//espacio entre unos
                    j+=2;
                }
                else{
                    j+=1;
                }
            }
            else{//dos primeras filas
                matriz[i][j] = '1';
                matriz[i+4][j] = '1';
                if ((j == 1) or (j==4)){//espacio entre unos
                    j+=2;
                }
                else{
                    j+=1;
                }

            }
        }
    }
}
void patron_cuatro(char** matriz){//reescribe la matriz con el patron 4
    // Inicializar la matriz con '0'
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                matriz[i][j] = '0';
            }
        }

        // Llenar el patron de '1'
        for (int i = 0, v = 7; i < 4; i++, v--) {//divide el patron en dos
            for (int j = 0; j < 4; j++) {
                matriz[i][j+i] = '1';//parte superior
                matriz[v][j+i] = '1';//parte inferior
            }
        }
}
void imprimir_patron(char** matriz){
    // Imprimir la matriz en pantalla el estado de la matriz
       for (int i = 0; i < 8; i++) {
           for (int j = 0; j < 8; j++) {
               cout << matriz[i][j] << ' ';
           }
           cout << endl;
       }
}
int validacion_opcion(int a,int b){//valida que el numero ingresado este entre los limites a,b
    int opcion;
    cout << "ingresa una ipcion escribiendo el numero de la opcion: ";
    cin>>opcion;
    cout<<endl;

    while ((opcion<a) or (opcion>b)){//si el numero ingresado no coincide vuelve a pedir otro numero
        cout<<"-------------------------------"<<endl;
        cout<<"             ERROR             "<<endl;
        cout<<"-------------------------------"<<endl<<endl;
        cout<<"El numero ingresado no coincide"<<endl;
        cout<<"Digite una opcion nuevamente: ";
        cin>>opcion;
        cout<<endl;
    }
    return opcion;
}
void dibujar_patron(char** matriz){
    int opcion = 0;
    cout<<"---------------Patrones------------------"<<endl;
    cout<<"Escriba el numero de la opcion segun sea el caso"<<endl;
    cout<<"1. Patron del rombo"<<endl;
    cout<<"2. Patron de la X"<<endl;
    cout<<"3. Patron de secuencia de cuadrados"<<endl;
    cout<<"4. Patron de franja  >"<<endl;
    cout<<"-------------------------------------"<<endl;
    opcion = validacion_opcion(1,4);

    if (opcion == 1) {
        patron_uno(matriz);

    }
    else if (opcion == 2) {
        patron_dos(matriz);

    }
    else if (opcion == 3) {
        patron_tres(matriz);

    }
    else{
        patron_cuatro(matriz);

    }

    imprimir_patron(matriz);
}
void verificacion(char** matriz){
    for (int i = 0; i<8; i++){
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = '1';
        }
    }
}
