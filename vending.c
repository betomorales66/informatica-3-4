#include <stdio.h>

int main(void){
    //tortas chumas
    float price1 = 74.99;
    int quantity1 = 15;
    char select1 = 't';

    //mango ice cream
    float price2 = 30.50;
    int quantity2 = 20;
    char select2 = 'm';

    //pretzels
    float price3 = 15.00;
    int quantity3 = 20;
    char select3 = 'p';

    //print for vending machine
    printf("Vending Machine Stock\n");

    printf("\n");

    printf("-----------------------\n");

    printf("\n");

    printf("item name: Tortas Chumas\n");
    printf("price: = $%.2f\n",price1);
    printf("quantity: = %d\n",quantity1);
    printf("selection code: = %c\n",select1);

    printf("\n");

    printf("item name: mango ice cream\n");
    printf("price: = $%.2f\n",price2);
    printf("quantity: = %d\n",quantity2);
    printf("selection code: = %c\n",select2);

    printf("\n");

    printf("item name: pretzels\n");
    printf("price: = $%.2f\n",price3);
    printf("quantity: = %d\n",quantity3);
    printf("selection code: = %c\n",select3);


}
