#include<stdio.h>
int chequeo(char tablero[3][3], int empate);
int main(){
    char tablero;
    int empate;
    chequeo(tablero,empate);
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
