#include <stdio.h>

//char linha [0] = {'A','B','C','D','E','F','G','H','I','J',};

int main() {
    int  matrix [10][10] = {0};
    int i, j;
    matrix[1][3] = 3; matrix[1][4] = 3; matrix[1][5] = 3; 
    matrix[5][8] = 3; matrix[6][8] = 3; matrix[7][8] = 3;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d ", matrix[i][j]);
        
          }
            printf("\n");
        }
        return 0;
    }
    