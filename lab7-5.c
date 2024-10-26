#include <stdio.h>
#include <string.h>
#include <ctype.h>

double getValue();
double findMin(double array[], int n);
double findMax(double array[], int n);
double findAvg(double array[], int n);

double getValue(){
    double value;
    scanf("%lf", &value);
    return value;
}

int main(){
    int n = 0;
    scanf("%d", &n);

    double array[n];
    for (int i = 0; i < n; ++i){
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);

    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf", n, min, max, avg);
    
}

double findMin(double array[], int n){
    double min = array[0];
    for (int i = 1; i < n; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

double findMax(double array[], int n){
    double max = array[0];
    for (int i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

double findAvg(double array[], int n){
    double avg = 0;
    for (int i = 0; i < n; i++){
        avg += array[i];
    }
    return avg / n;
}