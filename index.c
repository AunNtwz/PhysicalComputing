#include <stdio.h>
#include <string.h>
 
int main(){
    int number = 0;
    int i, j;
    int list_m[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int list_n[] = {1, 3, 9, 7, 11, 15, 19};
    int list_num[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 
    int len_m = sizeof(list_m)/sizeof(list_m[0]);
    int len_n = sizeof(list_n)/sizeof(list_n[0]);
    while (!(number >= 1 && number <= 20)){
        scanf("%d", &number);
    }
    for(i = 0; i < len_m; i++){
        if(number == list_m[i]){
            printf("%d is in M at index [%d]", number, i);
        }
    }
    for(j = 0; j < len_n; j++){
        if(number == list_n[j]){
            printf("%d is in N at index [%d]", number, j);
        }
    }
    if (number == 5 || number == 12 || number == 13 || number == 14 || number == 17){
        printf("%d is not in neither M nor N", number);
    }
}