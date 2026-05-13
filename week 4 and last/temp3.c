#include <stdio.h>
// 1.prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
    printf("temperatue converter \n");
    printf("1. celsius to farenheit \n");
    printf("2. farenheit to celsius \n");
    printf("enter your option: ");
    int user_response;
    scanf("%d", &user_response);

    if(user_response == 1){
        c_to_f();
    }else if (user_response == 2){
        f_to_c();
    }else{
        printf("invalid option\n");
    }

}
void c_to_f(void){
float c;
    printf("enter the temperature in celsius: ");
    scanf("%f", &c);
    float f = (c * 1.8) + 32;
    printf("%.2f°c = %.2f°f\n", c, f);
}

void f_to_c(void){
float f;
    printf("enter the temperature in farenheit: ");
    scanf("%f", &f);
    float c = (f - 32 ) / 1.8;
    printf("%.2f°f = %.2f°c\n", f, c);
}
