#include <stdio.h>
#include <math.h>
 
int main(){
    float price;
    float percentage;
    float buy;
 
    scanf("%f", &price);
    scanf("%f", &percentage);
    scanf("%f", &buy);
 
    float discount = (percentage/100)*price;
    float pricesell = ((price-discount)*buy);
    printf("%.2f", pricesell);
}