#include <stdio.h>
 
int main(){
    double sbp;
    double dbp;
    int check = 0;
 
    scanf("%lf\n", &sbp);
    scanf("%lf",& dbp);
 
    if(sbp > 140){
        check = 1;
    }
    if(dbp > 90){
        check = 1;
    }
    if(check == 0){
        printf("Normal");
    }
    else if(check == 1){
        printf("Hypertension");
    }
}