#include <stdio.h>
#include <math.h>
 
double resultSqrt(long num1, long num2);
void printSqrt(long num1, long num2, double result);
 
int main(){
    long num1, num2;
    scanf("%ld %ld", &num1, &num2);
 
    printSqrt(num1, num2, resultSqrt(num1, num2));
 
    return 0;
}
 
double resultSqrt(long num1, long num2){
    double result;
    num1 = num1*num1;
    num2 = num2*num2;
    result = sqrt(num1+num2);
    return result;
}
 
void printSqrt(long num1, long num2, double result){
    printf("sqrt(%ld^2+%.ld^2)=%.2lf", num1, num2, result);
}