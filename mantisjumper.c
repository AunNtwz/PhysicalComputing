#include <stdio.h>
 
int mantis_jump(int n);
 
int main(){
    int n;
    scanf("%d", &n);
 
    printf("method = %d", mantis_jump(n));
}
 
int mantis_jump(int n){
    if (n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    else{
        return mantis_jump(n-1) + mantis_jump(n-2);
    }
}