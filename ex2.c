#include <stdio.h>

#define rows 3
#define col 3

void transpose(int matrix[rows][col]){
    printf("transpose matrix\n");
    for (int j=0; j<col; j++){
        for (int i=0; i<rows; i++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
   int matrix[rows][col]={
    {1,2,3},
    {4,5,6},
    {7,8,9}};

    transpose(matrix);
return 0;
}