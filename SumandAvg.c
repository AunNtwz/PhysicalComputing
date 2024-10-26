#include <stdio.h>
 
int main(){
    float num1;
    float num2;
    float num3;
    float num4;
 
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);
 
    float sum = num1+num2+num3+num4;
    float average = sum/4;
 
    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f", average);
}