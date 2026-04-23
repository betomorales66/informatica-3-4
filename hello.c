#include <stdio.h>

int main(void)
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Hello %s!\n", name);

    char color[50];
    printf("Enter your favorite color: ");
    scanf("%s", &color);
    printf("your favorite color is %s!\n", color);

    int age[50];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("your age is %d!\n", age);


}
