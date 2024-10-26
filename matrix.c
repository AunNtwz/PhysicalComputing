#include <stdio.h>

int main(){
    double matrix[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    double matrix2[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for(int row = 0; row < 3; row++){
        for(int col = 0 ; col < 3; col++){
            scanf("%lf", &matrix[row][col]);
        }
    }
    for(int row = 0; row < 3; row++){
        for(int col = 0 ; col < 3; col++){
            scanf("%lf", &matrix2[row][col]);
        }
    }

    printf("A x B\n");
    for(int row = 0; row < 3; row++){
        for(int col = 0 ; col < 3; col++){
            printf("%.2lf ", matrix[row][col]);
        }
        printf("\n");
    }
}
