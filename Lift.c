#include <stdio.h>
 
int main(){
    int amount;
    double weightlift;
    int i = 0;
    double age;
    int kid = 0;
    int adult = 0;
    double weight;
    double allweight = 0;
     
    scanf("%d\n", &amount);
    scanf("%lf\n", &weightlift);
 
    while(i < amount){
        scanf("%lf", &age);
        scanf("%lf", &weight);
        allweight += weight;
        if(age < 12 && adult == 0){
            kid = 1;
        }
        if(age >= 12 && kid == 1){
            kid = 0;
        }
        if(age >= 12){
            adult += 1;
        }
        i++;
    }
    if(allweight > weightlift){
        printf("Not Safe");
    }
    else if(kid == 1 && adult == 0){
        printf("Not Safe");
    }
    else if(kid == 0 || adult != 0){
        printf("Safe");
    }
    else{
        printf("Safe");
    }
}