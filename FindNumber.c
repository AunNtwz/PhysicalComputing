#include <stdio.h>
 
int main(){
    double num1;
    double num2;
    double num3;
 
    scanf("%lf %lf %lf", &num1, &num2, &num3);
 
    double max, min;
 
    if ((num1 > num2) && (num1 > num3)){
        max = num1;
    }
    else if ((num2 > num1) && (num2 > num3)){
        max = num2;
    }
    else if ((num3 > num1) && (num3 > num2)){
        max = num3;
    }
 
    if ((num1 < num2) && (num1 < num3)){
        min = num1;
    }
    else if ((num2 < num1) && (num2 < num3)){
        min = num2;
    }
    else if ((num3 < num1) && (num3 < num2)){
        min = num3;
    }
 
    if ((num1 != max) && (num1 != min)){
        printf("%.2lf", num1);
    }
    else if ((num2 != max ) && (num2 != min)){
        printf("%.2lf", num2);
    }
    else if ((num3 != max) && (num3 != min)){
        printf("%.2lf", num3);
    }
}