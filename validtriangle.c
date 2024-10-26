#include <stdio.h>
 
int main(){
    double a;
    double b;
    double c;
 
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
 
    if (a + b > c && a + c > b && b + c >a){
        printf("Triangle is valid.");
    }
    else{
        printf("Triangle is not valid.");
    }
}