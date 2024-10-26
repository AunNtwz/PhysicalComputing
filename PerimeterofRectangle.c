#include <stdio.h>
 
int main(){
    double width;
    double height;
 
    scanf("%lf", &width);
    scanf("%lf", &height);
     
    double perimeter = (width+height)*2;
    printf("Perimeter of rectangle = %.4lf units", perimeter);
}