#include <stdio.h>
 
int main(){
    double num1;
    double num2;
 
    scanf("%lf", &num1);
    scanf("%lf", &num2);
 
    if(num1 == num2){
        printf("%.0lf + %.0lf = %.0lf",num1, num2, num1+num2);
    }
    else{
        printf("%.0lf - %.0lf = %.0lf",num1, num2, num1-num2);
    }
}