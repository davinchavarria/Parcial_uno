#include "funciones_parcial_uno.h"

void menu_principal(){
    int opcion = 2;
    if (opcion == 1){
        //dibujar patron
        cout<<" ";
    }
    else{
        //Terminar ejecucion
        cout<<" ";
    }
}
void patron_uno(char **matriz){
    int j = 3, v = 5,n = 3 ;

    // Inicializar la matriz con '0'
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            rombo[i][j] = '0';
        }
    }

    // Llenar el rombo utilizando ciclos

    for (int i = 0, b = 7; i < 4; i++, b--) {
        while (j != v){
            rombo[i][j] = '1';
            rombo[b][j] = '1';
            j+=1;
        }
        v+=1;//cantidad de iteraciones por fila
        j-=n;//iterador
        n+=2;//posicion de inicio para cada fila

    }

}

void patron_dos(char **matriz){
    //llenamos la matriz de ceros
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matriz[i][j] = '0';
        }
    }
    // Dibujar la "X" en la matriz
    for (int i = 0; i < size; i++) {
        matriz[i][i] = '1';             // Diagonal superior izquierda a inferior derecha
        matriz[i][size - 1 - i] = '1'; // Diagonal superior derecha a inferior izquierda
    }
}
void patron_tres(char **matriz){

}
void patron_cuatro(char **matriz){

}

void dibujar_patron(char **matriz){
    int opcion = 0;
    //X
    if (opcion == 0) {
        for (int i = 0; i<8; i++){
            for (int j = 0; j<8; j++){
                matriz[i][j]= ;
            }
        }
    }
}
