#include <stdio.h>
#include <ctype.h>

int main(){
    char word[301];
    char search;
    int list[301];

    scanf("%[^\n]s", word);
    scanf("\n%c", &search);

    int lengthword = 0;
    while(word[lengthword] != '\0'){
        lengthword++;
    }

    int count = 0;
    int i = 0;
    for(i; i < lengthword; i++){
        if (tolower(word[i]) == tolower(search)){
            list[count] = i+1;
            count ++;
        }
    }

    if(count > 0){
        printf("There is/are %d \"%c\" in the above sentences.\n", count, tolower(search));
        printf("Position: ");
        for(int k = 0; k < count; k++){
            if (k == count-1){
                printf("%d", list[k]);
            }
            else{
                printf("%d, ", list[k]);
            }
        }
    }
    else{
        printf("Not found.");
    }
}
