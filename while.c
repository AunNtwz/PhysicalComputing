#include <stdio.h>
 
int main(){
    int i = 1;
    int num;
 
    scanf("%d", &num);
 
    while(i < num){
        printf("%d ", i);
        i++;
    }
    printf("%d", num);
}