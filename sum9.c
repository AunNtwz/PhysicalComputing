#include <stdio.h>
 
int main(){
    int num;
    int sum;
 
    while (1){
        scanf("%d", &num);
        if (num == -9){
            break;
        }
        else{
            sum += num;
        }
    }
    printf("%d", sum);
}