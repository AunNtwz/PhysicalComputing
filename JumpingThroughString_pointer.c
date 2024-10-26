#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char *str;
    int length;
    int tee;
    scanf("%d", &length);
    scanf("%d", &tee);
 
    str = (char *) malloc(length * sizeof(char));
    scanf(" %[^\n]s", str);
 
    char *ptr = str;
    int i = 0;
    while(*ptr != '\0'){
        if(i == tee || i == 0){
            printf("%c", *ptr);
            i = 0;
        }
        *ptr++;
        i++;
    }
 
    free(str);
    return 0;
}