#include <stdio.h>
 
int main(){
    char letter;
 
    scanf("%c", &letter);
 
    if (letter >= 65 && letter <= 90){
        printf("%c", letter+32);
    }       
    else if(letter >= 97 && letter <= 122){
        printf("%c", letter-32);
    }
    else{
        printf("error");
    }
}