#include<stdio.h>
float FtoC(float);
void main(){
    float fahrenheit,celsius;
    printf("enter the value");
    scanf("%f",&fahrenheit);
    celsius=FtoC(fahrenheit);
    printf("the celsius is %f",celsius);
}

float FtoC(float f){
    float factor=5.0/9.0;
    float freezing=32.0;
    float c;
    c=factor*(f-freezing);
    return c;
}