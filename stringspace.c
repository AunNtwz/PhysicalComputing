#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char name[201];
    scanf("%[^\n]s", name);
    for(int i = 0; i < strlen(name); i++){
        if(!isspace(name[i])){
            printf("%c", name[i]);
        }
    }
}