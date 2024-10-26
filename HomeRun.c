#include <stdio.h>
 
int main(){
    int i = 0;
    int num;
    double canhit;
    double length;
    int count = 0;
     
    scanf("%d", &num);
    scanf("%lf", &canhit);
 
    while(i < num){
        scanf("%lf", &length);
        if(length < canhit){
            count += 1;
        }
        i++;
    }
    printf("%d", count);
}