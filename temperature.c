#include <stdio.h>
#include <ctype.h>
 
double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);
 
int main(){
    double temp;
    char text;
 
    scanf("%lf %c", &temp, &text);
 
    text = tolower(text);
    if(text == 'c'){
        printFarenheit(temp);
    }
    else if(text == 'f'){
        printCelcius(temp);
    }
    return 0;
}
 
double celsiusToFahrenheit(double celcius){
    double result = 0;
    result = 32 + (celcius * 1.8);
    return result;
}
 
double fahrenheitToCelcius(double fahrenheit){
    double result = 0;
    result = (fahrenheit-32)/1.8;
    return result;
}
 
void printFarenheit(double fahrenheit){
    printf("%.2lf f", celsiusToFahrenheit(fahrenheit));
}
 
void printCelcius(double celcius){
    printf("%.2lf c", fahrenheitToCelcius(celcius));
}