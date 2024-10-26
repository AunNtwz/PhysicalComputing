#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char name[201];
    scanf("%[^\n]s", name);
    printf("%c.", name[0]);
    int index = 0;
    for(int i = 0; i < strlen(name); i++){
        if(isspace(name[i])){
            index = i;
        }
    }
    printf("%c.", name[index+1]);
}