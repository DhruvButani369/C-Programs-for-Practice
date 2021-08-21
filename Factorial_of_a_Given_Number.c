#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Factorial of a Given Number

    printf("Factorial of a Given Number..\n\n");

    int num;
    
    printf("Please Enter Number : \n");
    scanf("%d", &num);

    int i;
    int ans = 1;
 
    for ( i = 1; i <= num; i++)
    {
        ans *= i;
    }
    
    printf("The Factorial Of A Given Number Is : %d\n", ans);
    
    return 0;
}
