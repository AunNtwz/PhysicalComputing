#include <stdio.h>
 
int main(){
    double price;
    double percent;
    int buy;
  
    scanf("%lf", &price);
    scanf("%lf", &percent);
    scanf("%d", &buy);
  
    int mhaitam = buy - (buy/3);
    int copy = percent*1;
    double promo1 = mhaitam*price;
    double promo2 = (buy*price) - ((buy*price)*(percent/100));
  
    if (promo1 > promo2){
        printf("Discount %d%%\n", copy);
        printf("%.2lf", promo2);
    }
    else if (promo2 > promo1){
        printf("Buy 2 Get 1\n");
        printf("%.2lf", promo1);
    }
    else if (promo1 == promo2){
        printf("Discount %d%%\n", copy);
        printf("%.2lf", promo2);
    }
}