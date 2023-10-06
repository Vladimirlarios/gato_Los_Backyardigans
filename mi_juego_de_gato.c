#include <stdio.h>
void inicializarTablero(char tablero[3][3]);
void mostrarTablero(char tablero[3][3]);
int realizarMovimiento(char tablero[3][3], int jugador);
int chequeo(char tablero[3][3], int empate);
int main() {
    char tablero[3][3];
    int jugador=1;
    inicializarTablero(tablero);
    mostrarTablero(tablero);
    jugador=realizarMovimiento(tablero,jugador);
    return 0;
}
void inicializarTablero(char tablero[3][3]) {
    printf("**BIENVENIDO AL JUEGO**\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tablero[i][j] = ' ';
        }
    }

}
void mostrarTablero(char tablero[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tablero[i][j]);
            if (j < 2) {
                printf("\t|\t");
            }
        }
        printf("\n");
        if  (i < 2) {
            printf("--------+---------------+------------\n");
        }
    }
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
        mostrarTablero(tablero);
        chequeo(tablero,empate);
    }
    return jugador;
}
int chequeo(char tablero[3][3], int empate) {
            int Ganador;
            if((tablero[0][0] & tablero[0][1] & tablero[0][2]) == 'x'  ){
                 Ganador = 1;
                 printf("Gano el jugador numero 1");
                 exit(-1);
            }else if((tablero[1][0] & tablero[1][1] & tablero[1][2]) == 'x'  ){
                        Ganador = 1;
                        printf("Gano el jugador numero 1");
                        exit(-1);
            }else if((tablero[2][0] & tablero[2][1] & tablero[2][2]) == 'x'  ){
                        Ganador = 1;
                        printf("Gano el jugador numero 1");
                        exit(-1);
            }else if((tablero[0][0] & tablero[1][0] & tablero[2][0]) == 'x'   ){
                        Ganador = 1;
                        printf("Gano el jugador numero 1");
                        exit(-1);
            }else if((tablero[0][1] & tablero[1][1] & tablero[2][1]) == 'x'  ){
                        Ganador = 1;
                        printf("Gano el jugador numero 1");
                        exit(-1);
            }else if((tablero[0][2] & tablero[1][2] & tablero[2][2]) == 'x'  ){
                        Ganador = 1;
                        printf("Gano el jugador numero 1");
                        exit(-1);
            }else if((tablero[0][0] & tablero[1][1] & tablero[2][2]) == 'x'  ){
                        Ganador = 1;
                        printf("Gano el jugador numero 1");
                        exit(-1);
            }else if((tablero[0][2] & tablero[1][1] & tablero[2][0]) == 'x' ){
                        Ganador = 1;
                        printf("Gano el jugador numero 1");
                        exit(-1);
            }else if((tablero[0][0] & tablero[0][1] & tablero[0][2]) == 'o' ){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if((tablero[1][0] & tablero[1][1] & tablero[1][2]) == 'o' ){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if((tablero[2][0] & tablero[2][1] & tablero[2][2]) == 'o' ){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if((tablero[0][0] & tablero[1][0] & tablero[2][0]) == 'o' ){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if((tablero[0][1] & tablero[1][1] & tablero[2][1]) == 'o'){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if((tablero[0][2] & tablero[1][2] & tablero[2][2]) == 'o' ){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if((tablero[0][0] & tablero[1][1] & tablero[2][2]) == 'o' ){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if((tablero[0][2] & tablero[1][1] & tablero[2][0]) == 'o'){
                        Ganador = 1;
                        printf("Gano el jugador numero 2");
                        exit(-1);
            }else if(empate==9){
                printf("Esto a sido empate!!!!!");
                exit(-1);
            }
}
