#include <stdio.h>
 
int main(){
    int num;
    int i;
 
    scanf("%d", &num);
 
    if (num > 0){
        while(num > 0){
            printf("%d ", num);
            num--;
        }
    }
    else if(num < 0){
        while(num < 0){
            printf("%d ", num);
            num++;
        }
    }
    printf("%d", 0);
}