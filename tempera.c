#include <stdio.h>

int main(void){

    float temperature, Farenheit;
    printf("Enter temperature in C: ");
    scanf("%f", &temperature);

    Farenheit = (temperature / 1.8) + 32;

    printf("temperature in Farenheit: %.2f\n", Farenheit);

    if(temperature < 0){
    printf("❄️ Freezing weather\n");
    }
    else if(temperature < 10){
    printf("🥶 Very cold weather\n");
    }
    else if(temperature < 20){
    printf("🧥 Chilly weather\n");
    }
    else if(temperature < 30){
    printf("🖼️ Normal weather\n");
    }
    else if(temperature < 40){
    printf("☀️ Hot weather\n");
    }
    else if(temperature > 40){
    printf("🔥 Very hot weather\n");
    }
}
