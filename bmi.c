#include <stdio.h>
 
int main(){
    float height;
    float weight;
    float bmi;
 
    scanf("%f", &weight);
    scanf("%f", &height);
 
    bmi = (height)/((weight/100)*(weight/100));
 
    printf("%f", bmi);
}