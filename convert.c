#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printResult(char one[101], char two[101]);

int main(){
    char name[101] = {0};
    char samename[101] = {0};
    char one[101] = {0};
    char two[101] = {0};

    scanf("%[^\n]s", name);
    scanf(" %[^\n]s", samename);

    int length1 = strlen(name);
    int length2 = strlen(samename);

    for(int i = 0; i < length1; i++){
        if(islower(name[i])){
            one[i] = toupper(name[i]);
        }
        else{
            one[i] = tolower(name[i]);
        }
    }

    for(int i = 0; i < length2; i++){
        if(islower(samename[i])){
            two[i] = toupper(samename[i]);
        }
        else{
            two[i] = tolower(samename[i]);
        }
    }
    printResult(one, two);
}

void printResult(char one[101], char two[101]){
    printf("*** Results ***\n%s\n%s\n***************\n", one, two);

    for(int i = 0; i < strlen(one); i++){
        one[i] = tolower(one[i]);
        two[i] = tolower(two[i]);
    }
    if(strcmp(one, two) != 0){
        printf("Both strings are not the same.");
    }
    else{
        printf("Both strings are the same.");
    }
}
