#include <stdio.h>



int main() {
    //char linha [0] = {'A','B','C','D','E','F','G','H','I','J'};
    int  matrix [10][10] = {0};
    int i, j, k, l;
    int navioHorizontal[3]= {3,3,3};
    int navioVertical [3] = {3,3,3};
    int navioDiagonalDir [3] = {3,3,3};
    int navioDiagonaEsq [3]= {3,3,3};
    //int habilidadeCruz [5] = {5,5,5,5,5};
    //int habilidadeOcta [3] = {5,5,5};
    //int habilidadecone [4] = {5,5,5,5};


        // octaedro
         matrix[8][8  ] = 5; // centro
         matrix[8+1][8] = 5; // linha direita 
         matrix[8][8-1] = 5; // coluna p/cima  
         matrix[8][8+1] = 5; // coluna p/baixo 
         matrix[8-1][8] = 5; // linha p/ esquerda
          //cruz  
         matrix[5][5  ] = 5; // centro
         matrix[5+1][5] = 5; // linha p/ baixo ↓
         matrix[5][5-1] = 5; // coluna esquerda ←
         matrix[5][5+1] = 5; //coluna p/ direita → 
         matrix[5-1][5] = 5; // linha p/ cima ↑
         matrix[5-2][5] = 5; // linha ↑↑
         matrix[5+2][5] = 5; // linha ↓↓
            // cone
         matrix[2][2  ] = 5; // centro
         matrix[2-1][2] = 5; // ↑
         matrix[2-2][2] = 5; //topo ↑↑  
         matrix[2][2-1] = 5; // esquerda ←
         matrix[2][2-2] = 5; // esquerda ← ←
         matrix[2][2+1] = 5; // direita →
         matrix[2][2+2] = 5; // direita →→
         matrix[2-1][2+1] = 5; // diagonal direita 
         matrix[2-1][2-1] = 5; // diagonal esquerda
    for (k = 0; k < 3; k++){
        matrix [1][2+k] = navioHorizontal[k]; // Cria os navio na horizontal
        matrix [2+k][8] = navioVertical[k];  // Cria os navios na vertical
        matrix [6+k][2+k] = navioDiagonalDir[k]; //cria os navios na diagonal direita
        matrix [3+k][5-k] = navioDiagonaEsq[k];
        
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
    