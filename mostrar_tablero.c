#include <stdio.h>
void mostrarTablero(char tablero[3][3]);
int main(){
    char tablero[3][3];
    mostrarTablero(tablero);
    return 0;
}
void mostrarTablero(char tablero[3][3]){
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
