#include <stdio.h>
#include <string.h>
 
struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};
 
int main(){
    int amount = 0;
    scanf("%d", &amount);
 
    struct Record r[amount];
 
    for(int i = 0; i < amount; i++){
        scanf("%s %s %ld %ld", r[i].id, r[i].name, &r[i].salary, &r[i].sales);
    }
    char search[10];
    scanf("%s", search);
 
    for(int i = 0; i < amount; i++){
        double commission = r[i].sales*0.02;
        if(strcmp(r[i].id, search) == 0){
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf", 
            r[i].id, r[i].name, r[i].sales, commission, r[i].salary, r[i].salary + commission);
            break;
        }
        else if(i == amount-1 || strcmp(r[i].id, search) == 1){
            printf("ID not found !!!");
        }
    }
     
}