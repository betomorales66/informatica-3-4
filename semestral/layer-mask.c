
//How do layer masks work in Photoshop? Give an example of a use case scenario for layer masks in Photoshop.
//they are a crucial tool that allows you to hide or show parts of a layer without permanently erasing them. One scenario of how to use it in PS could be like you have an image of a house and you want to add a photo or image of a guy in it so you use layer mask to add it.

#include <stdio.h>

int main(void){

   float value;
    printf("Enter layer mask value: ");
    scanf("%f", &value);


    if(value = 0){
    printf("Hidden\n");
    }
    else if(value = 255){
    printf("visible\n");
    }
    else if(value > 1){
    printf("Partially Transparent\n");
    }
    else if(value < 254){
    printf("Partially Transparent\n");
    }
    else if(value < 0){
    printf("Invalid Value\n");
    }
     else if(value > 255){
    printf("Invalid Value\n");
    }

}






















