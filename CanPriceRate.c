#include <stdio.h>
 
int main(){
    float price;
    float senpan;
    float height;
 
    scanf("%f", &price);
    scanf("%f", &senpan);
    scanf("%f", &height);
 
    float radius = (senpan/2);
 
    float volumn = (height*(3.14159265359)*(radius*radius));
    float rate = (price/volumn);
 
    printf("Volume : %.2fml\n", volumn);
    printf("Baht/ml : %.4f", rate);
}