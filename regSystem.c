#include <stdio.h>
 
int main(){
    int age;
    int height;
    int weight;
    int a20h160 = 0;
    int a20h180w60 = 0;
    int a30w40_80 = 0;
    int a40w85h200 = 0;
    float avga;
    float avgh;
    float avgw;
    int i;
 
    for (i = 1; i <= 50; i++){
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160){
            a20h160 += 1;
        }
        if(age < 20 && (height <= 180 || weight >= 60)){
            a20h180w60 += 1;
        }
        if(age >= 30 && (weight >= 40 && weight <= 80)){
            a30w40_80 += 1;
        }
        if(age < 40 && (weight < 85 || height <= 200)){
            a40w85h200 += 1;
        }
        avga += age;
        avgh += height;
        avgw += weight;
    } 
    printf("Age >= 20 and Height >= 160: %d\n", a20h160);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", a20h180w60);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", a30w40_80);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", a40w85h200);
    printf("Average Age: %.0f\n", avga/50);
    printf("Average Height: %.2f\n", avgh/50);
    printf("Average Weight: %.2f", avgw/50);
}