#include <stdio.h>



int main() {
    //char linha [0] = {'A','B','C','D','E','F','G','H','I','J'};
    int  matrix [10][10] = {0};
    int i, j, k, l, n;
    int navioHorizontal[3]= {3,3,3};
    int navioVertical [3] = {3,3,3};
    int navioDiagonalDir [3] = {3,3,3};
    int navioDiagonaEsq [3]= {3,3,3};

    for (k = 0; k < 3; k++){
        matrix [0][0+k] = navioHorizontal[k]; // Cria os navio na horizontal
        matrix [0+k][0] = navioVertical[k];  // Cria os navios na vertical
        matrix [0+k][0+k] = navioDiagonalDir[k]; //cria os navios na diagonal direita
        matrix [0+k][0-k] = navioDiagonaEsq[k];

    }
            printf(" # ");
        for (l ='A'; l <='J'; l++){ // cria indices de letras 
            printf("%c ", l); 
        }
        printf("\n");
    for (i = 0; i < 10; i++){ // loop para Matriz 10x10
        printf("%2d ", i+1);
        for (j = 0; j < 10; j++){
            printf("%d ", matrix[i][j]); // imprime a matriz 10x10 nosso mar
           
        }
            printf("\n");
            
       }
        return 0;
    }
    