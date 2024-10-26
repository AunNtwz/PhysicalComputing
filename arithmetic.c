#include <stdio.h>
 
int main(){
    double num1, num2;
     
    scanf("%lf,%lf", &num1, &num2);
 
    double buak = num1 + num2;
    double lhob = num1 - num2;
    double kun = num1 * num2;
    double harn = num1 / num2;
 
    printf("The sum of the given numbers : %lf\n", buak);
    printf("The difference of the given numbers : %lf\n", lhob);
    printf("The product of the given numbers : %lf\n", kun);
    printf("The quotient of the given numbers : %lf", harn);
}