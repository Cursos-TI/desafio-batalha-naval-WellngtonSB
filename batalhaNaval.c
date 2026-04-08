#include <stdio.h>

//char linha [0] = {'A','B','C','D','E','F','G','H','I','J',};

int main() {
    int  matrix [10][10] = {0};
    int i, j, k;
    int navioHorizontal[3]= {3,3,3};
    int navioVertical [3] = {3,3,3};
    
    for (k = 0; k < 3; k++){
        matrix [2][3+k] = navioHorizontal[k];
        matrix [3+k][6] = navioVertical [k];
    }


    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d ", matrix[i][j]);
        
          }
            printf("\n");
        }
        return 0;
    }
    