#include <stdio.h>
void inicializarTablero(char tablero[3][3]);
int main(){
    char tablero[3][3];
    inicializarTablero(tablero);
    return 0;
}
void inicializarTablero(char tablero[3][3]){
    printf("**BIENVENIDO AL JUEGO**\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tablero[i][j] = ' ';
        }
    }

}
