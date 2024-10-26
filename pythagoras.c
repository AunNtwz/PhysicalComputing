#include <stdio.h>
#include <math.h>
 
int main(){
    double num1;
    double num2;
 
    scanf("%lf", &num1);
    scanf("%lf", &num2);
 
    double sum = sqrt((num1*num1)+(num2*num2));
    printf("%.2lf", sum);
}