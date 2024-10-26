#include <stdio.h>
 
int main(){
    double matrix[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    for(int row = 0; row < 3; row++){
        for(int col = 0 ; col < 3; col++){
            scanf("%lf", &matrix[row][col]);
            if (row == 2 && col == 2){
                if((matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2]) && (matrix[0][0] == matrix[2][2])){
                    if(matrix[0][1] == 0 && matrix[0][2] == 0 && matrix[1][0] == 0 && 
                    matrix[1][2] == 0 && matrix[2][0] == 0 && matrix[2][1] == 00){
                        printf("This is a scalar matrix");
                    }
                    else{
                        printf("This is not a scalar matrix");
                    }
                }
                else{
                    printf("This is not a scalar matrix");
                }
            }
        }
    }
}