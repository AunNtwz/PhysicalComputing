#include <stdio.h>
 
int main(){
    int i;
    int num;
 
    scanf("%d", &num);
 
    for (i = 1; i < num; i++){
        printf("%d ", i);
    }
    printf("%d", num);
}