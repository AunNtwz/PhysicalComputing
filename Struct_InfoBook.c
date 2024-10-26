#include <stdio.h>
#include <string.h>
 
int main(){
    struct student_info{
        char name[60];
        char surname[60];
        char sex[10];
        int age;
        char std_id[12];
        double gpa;
    } std;
    scanf("%s %s %s %d %s %lf", std.name, std.surname, std.sex, &std.age, std.std_id, &std.gpa);
    if(strcmp(std.sex, "Male") == 0){
        printf("Mr %.1s", std.name);
    }
    else{
        printf("Miss %.1s", std.name);
    }
    printf(" %s", std.surname);
    printf(" (%d)", std.age);
    printf(" ID: %s", std.std_id);
    printf(" GPA %.2lf", std.gpa);
}