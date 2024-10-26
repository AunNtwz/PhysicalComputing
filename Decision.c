#include <stdio.h>
 
int main(){
    int var_m;
    int var_n;
 
    scanf("%d %d", &var_m, &var_n);
 
    if (var_m > var_n){
        while(var_m > var_n){
            printf("%d ", var_m--);
        }
        printf("%d", var_n);
    }
    else if (var_n > var_m){
        while(var_n > var_m){
            printf("%d ", var_m++);
        }
        printf("%d", var_n);
    }
}