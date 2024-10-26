#include <stdio.h>
#include <string.h>
  
int main(){
    char word[100];
    int i = 0, j = 0;
  
    scanf("%s", word);
    int lenword = strlen(word);
  
    for(i = 0, j = lenword - 1; i < lenword; i++, j--){
        if (word[i] == word[j] && word[i+1] == word[j-1]){
            printf("It is Palindrome.");
            break;
        }else{
            printf("It is not Palindrome.");
            break;
        }
    }
}