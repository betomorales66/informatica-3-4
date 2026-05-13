#include <stdio.h>


void add(void);
void subtract(void);
void multiply(void);
void divide(void);

float num_1;
float num_2;
char sign;


int main(void){
    printf("Type your operation: \n");
    scanf("%f%c%f", &num_1, &sign, &num_2);

if (sign == '+' ){
    add();
}else if(sign == '-'){
    subtract();
}else if(sign == '*'){
    multiply();
}else if(sign == '/'){
    divide();
}}


void add(void){
float ans = num_1 + num_2;
    printf("%.0f %c %.0f = %.0f\n", num_1, sign, num_2, ans);
}

void subtract(void){
float ans = num_1 - num_2;
    printf("%.0f %c %.0f = %.0f\n", num_1, sign, num_2, ans);
}

void multiply(void){
float ans = num_1 * num_2;
    printf("%.0f %c %.0f = %.0f\n", num_1, sign, num_2, ans);
}

void divide(void){
float ans = num_1 / num_2;
    printf("%.2f %c %.2f = %.2f\n", num_1, sign, num_2, ans);

if(num_2 == 0){
    printf("Not possible \n");
}}
