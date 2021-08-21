#include<stdio.h>

int main()
{
    // Simple Interest

    printf("Simple Interest...\n");

    float p,r,n,final;

    printf("Please Enter Principle : \n");
    scanf("%f", &p);

    printf("Please Enter Daily Interest Rate : \n");
    scanf("%f", &r);

    printf("Please Enter Number Of Days Between Payments : \n");
    scanf("%f", &n);
    
    final = (p * r * n)/100;

    printf("Simple Interest : %f\n", final);

    return 0;

}
