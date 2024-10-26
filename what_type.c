#include <stdio.h>
#include <ctype.h>
 
int main(){
    char letter;
 
    scanf("%c", &letter);
 
    if(isdigit(letter)){
        printf("number");
    }
    else if(islower(letter)){
        printf("lowercase");
    }
    else if(isupper(letter)){
        printf("uppercase");
    }
    else{
        printf("error");
    }
}