#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char number[5];
    char text[] = "     ";
 
    scanf("%s", number);
 
    text[0] = number[2];
    text[1] = number[3];
    text[2] = number[4];
    text[3] = number[0];
    text[4] = number[1];
 
    printf("%s", text);
 
    return 0;
}