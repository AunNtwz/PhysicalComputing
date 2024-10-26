#include <stdio.h>
#include <string.h>
 
struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};
 
void playing_decision(struct Weather);
 
int main(){
    struct Weather w[5];
    int day = 0;
    scanf("%d", &day);
    for(int i = 0; i < day; i++){
        scanf("%s %d %d %c", w[i].outlook, &w[i].temperature, &w[i].humidity, &w[i].wind);
        playing_decision(w[i]);
    }
};
 
void playing_decision(struct Weather w){
    if(strcmp(w.outlook, "overcast") == 0){
        printf("yes\n");
    }
    else if(strcmp(w.outlook, "rain") == 0){
        if(w.wind == 'F'){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    else if(strcmp(w.outlook, "sunny") == 0){
        if(w.humidity > 77.5){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
}