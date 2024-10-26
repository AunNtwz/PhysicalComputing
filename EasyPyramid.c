#include <stdio.h>
int main() {
    int row, col, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++) { 
        for (col = 1; col <= (n*2)-1; col++){
            if(row + col <= n){
                printf(" ");
            }
            else if(col - row >= n){
                printf(" ");
            }
            else{
                printf("*");
            }
             
        }
        printf("\n");
    }
}