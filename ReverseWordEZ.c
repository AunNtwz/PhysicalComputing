#include <stdio.h>
  
int main(){
    char word[100];
    int i, j=0;
  
    scanf("%[^\n]s", word);
  
    int lenword = 0;
    while (word[lenword] != '\0'){
        lenword ++;
    }
 
    char newword[100];
  
    for(i = lenword; i >= 0; i--){
        newword[j] = word[i];
        printf("%s", newword);
    }
}