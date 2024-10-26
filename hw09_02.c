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
    for(int i = 0; str[i] != '\0'; i++){
        if(i%tee == 0){
            printf("%c", str[i]);
        }
    }

    free(str);
    return 0;
}