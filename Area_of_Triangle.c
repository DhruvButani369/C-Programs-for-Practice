#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Area of Triangle

    printf("Area of Triangle..\n\n");

    float base;
    
    printf("Please Enter Base Of Triangle : \n");
    scanf("%f", &base);

    printf("\n");

    float height;

    printf("Please Enter Height Of Triangle : \n");
    scanf("%f", &height);

    printf("\n");

    printf("The Area Of Triangle Is %f : \n", 0.5*base*height);

    return 0;
}
