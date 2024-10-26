#include <stdio.h>
#include <math.h>
 
double triangle(double a, double b);
double perimeter(double a, double b, double c);
double area(double a, double b);
 
int main(){
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    c = triangle(a, b);
    printf("Perimeter: %.2lf\n", perimeter(a, b, c));
    printf("Area: %.2lf", area(a, b));
    return 0;
}
 
double triangle(double a, double b){
    a = a*a;
    b = b*b;
    return sqrt(a + b);
}
 
double perimeter(double a, double b, double c){
    return a+b+c;
}
 
double area(double a, double b){
    return 0.5*a*b;
}