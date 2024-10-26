#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char word[200];
    char text[] = {'Q', 'R', 'M', 'N', 'C', 'E', 'D', 'K',
    'L','J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z',
    'G','W', 'I', 'A', 'B', 'X', 'Y', 'P'};
    char text_lower[] = {'q', 'r', 'm', 'n', 'c', 'e', 'd', 'k',
    'l','j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z',
    'g','w', 'i', 'a', 'b', 'x', 'y', 'p'};
 
    scanf("%[^\n]s", word);
 
    int lengthword = 0;
    while (word[lengthword] != '\0'){
        lengthword += 1;
    }
 
    int lengthtext = 0;
    while (text[lengthtext] != '\0'){
        lengthtext += 1;
    }
 
    for(int i = 0, j = 0, check = word[i]; i < lengthword; j++){
        if((word[i]) == text[j] && isupper(word[i])){
            if(j + 5 > 25){
                printf("%c", text[(6+j)-(lengthtext)]);
            }
            else{
                printf("%c", text[j+5]);
            }
            i++;
            j=-1;
        }
        else if((word[i]) == text_lower[j] && islower(word[i])){
            if(j + 5 > 25){
                printf("%c", text_lower[(6+j)-(lengthtext)]);
            }
            else{
                printf("%c", text_lower[j+5]);
            }
            i++;
            j=-1;
        }
        if(word[i] == ' '){
            printf(" ");
            i++;
            j=-1;
            }
    }
}