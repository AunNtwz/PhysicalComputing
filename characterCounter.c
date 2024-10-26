#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(){
    char *str;
    str = (char*) malloc(100 * sizeof(char));
    scanf("%[^\n]s", str);
 
    char *ptr = str;
    int lower = 0;
    int upper = 0;
    int digit = 0;
    while (*ptr != '\0'){
        if(islower(*ptr)){
            lower += 1;
        }
        else if(isupper(*ptr)){
            upper += 1;
        }
        else if(isdigit(*ptr)){
            digit += 1;
        }
        *ptr++;
    }
    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d", digit);
 
    free(str);
    return 0;
 
}