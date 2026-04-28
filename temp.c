#include <stdio.h>

int main(void){

    float temperature, celsius;
    printf("Enter temperature in F: ");
    scanf("%f", &temperature);


    celsius = (temperature - 32) / 1.8;


    printf("temperatrure in celsius: %.2f\n", celsius);




}
