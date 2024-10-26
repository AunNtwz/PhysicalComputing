#include <stdio.h>
#include <ctype.h>

int main(){
    char search;
    char text[150];

    scanf("%c\n", &search);
    scanf("%[^\n]s", text);

    int i = 0;
    int count = 0;
    while(text[i] != '\0'){
       if (tolower(text[i]) == tolower(search)){
            count += 1;
        }
        i++;
    }
    printf("%d", count);
}