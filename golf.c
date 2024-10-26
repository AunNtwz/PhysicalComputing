#include <stdio.h>
#include <math.h>

double sin(double radius);
double printResult(double degree, double u, double height);

int main(){
    double height = 0.00;
    double degree = 0;
    double var_u = 0;
    double PI = 3.141592653589793;
 
    scanf("%lf", &degree);
    scanf("%lf", &var_u);
 
    double radius = (PI*degree)/180;
    height = var_u*var_u;
    height = height*sin(radius)*sin(radius);
    height = height/(2*9.81);
 
    printResult(degree, var_u, height);
}
 
double printResult(double degree, double u, double height){
    printf("theta (degree) : %.0lf\nu (m/s) : %.0lf\nh (m) : %.4lf", degree, u, height);
}