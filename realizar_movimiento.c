#include <stdio.h>
int realizarMovimiento(char tablero[3][3], int jugador);
int main(){
    char tablero[3][3];
    int jugador=1;
    jugador=realizarMovimiento(tablero,jugador);
}
int realizarMovimiento(char tablero[3][3], int jugador) {
    int fila,j,columna,empate=0;
    for(;;){
        empate++;
        printf("Jugador %d, ingrese fila y columna :\n", jugador);
        scanf("%d %d", &fila, &columna);
        if (fila < 0 || fila >=3 || columna < 0 || columna >=3 || tablero[fila][columna] != ' ') {
            printf("Movimiento inválido. Inténtalo de nuevo.\n");
        } else {
            if(jugador==1){
                tablero [fila][columna]='x';
            }else{
                tablero [fila][columna]='o';
            }
            if(jugador==1){
            jugador=2;
            }else{
                jugador=1;
            }
        }
        //mostrarTablero(tablero);
        //chequeo(tablero,empate);
    }
    return jugador;
}
