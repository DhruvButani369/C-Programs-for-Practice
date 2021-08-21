#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Area and Circumference of a Circle

    printf("The Are Of Circle..\n");

    float redius;
    float pi = 3.14;

    printf("Please Enter Redius Of Circle : \n");
    scanf("%f", &redius);

    printf("The Area Of Circle Is : %f\n\n", pi*redius*redius);

    printf("The Circumference Of Circle..\n");
    
    printf("The Circumference Of Circle Is : %f\n", 2*pi*redius);

    
    return 0;
}
