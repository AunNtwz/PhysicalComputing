#include <stdio.h>
 
int main(){
    char text[5];
 
    scanf("%s", text);
    printf("%-81.1s", text);
    printf("%-81.2s", text);
    printf("%-81.3s", text);
    printf("%-81.4s", text);
    printf("%.5s", text);
 
}