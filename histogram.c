#include <stdio.h>
#include <ctype.h>
 
int main(){
    int num;
    scanf("%d", &num);
 
    char charact;
    int i = 0;
    int count = 0;
    char key[27];
    int value[300];
 
    for(i; i < num ; i++){
        int check = 0;
        scanf(" %c", &charact);
        charact = tolower(charact);
 
        for(int i = 0; i < count; i++){
            if(key[i] == charact){
                value[i] += 1;
                check = 1;
                break;
            }
        }
        if(check != 1){
            key[count] = charact;
            value[count] = 1;
            count++;
        }
    }
 
    for (int j = 0; j < count; j++) {
        printf("%c: %d\n", key[j], value[j]);
    }
}