#include <stdio.h>
 
int main(){
    int second;
 
    scanf("%d", &second);
    int number = second;
 
    int min = second/60;
    second %= 60;
    int hour = min/60;
    min %= 60;
    int day = hour/24;
    hour %= 24;
 
    printf("%d s = %d d %d h %d m %d s", number, day, hour, min, second);
}