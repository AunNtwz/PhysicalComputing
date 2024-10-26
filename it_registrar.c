#include <stdio.h>
 
int main(){
    char firstname[30];
    char lastname[30];
    char std_id[9];
    int dd, mm, yy;
    float grade;
 
    scanf("%s", firstname);
    scanf("%s", lastname);
    scanf("%s", std_id);
    scanf("%d/%d/%d", &dd, &mm, &yy);
    scanf("%f", &grade);
 
    printf("Fullname: %s %s\n", firstname, lastname);
    printf("ID: %s\n", std_id);
    printf("DOB: %02d-%02d-%02d\n", dd,mm,yy);
    printf("GPA: %.2f", grade);
}