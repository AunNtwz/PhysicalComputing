#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int text1;
    int text2;
    int text3;
    int text4;
    int text5;
 
    scanf("%c\n", &text1);
    scanf("%c\n", &text2);
    scanf("%c\n", &text3);
    scanf("%c\n", &text4);
    scanf("%c", &text5);
 
    printf("%c\n", (text1+1));
    printf("%c\n", (text2));
    printf("%c\n", (text3+1));
    printf("%c\n", (text4));
    printf("%c", (text5+1));
 
    return 0;
}