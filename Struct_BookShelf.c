#include <stdio.h>
#include <string.h>
 
int main(){
    struct book{
        char id[10];
        char name[100];
        char author[100];
    } b;
 
    int amount;
    scanf("%d", &amount);
    char bookid[10];
    scanf("%s", bookid);
    for(int i = 0; i < amount; i++){
        scanf("%s %s %s", b.id, b.name, b.author);
        if(strcmp(b.id, bookid) == 0){
            printf("%s", b.id);
            printf(" %s", b.name);
            printf(" %s", b.author);
            return 0;
        }
    }
    printf("Not Found");
 
}