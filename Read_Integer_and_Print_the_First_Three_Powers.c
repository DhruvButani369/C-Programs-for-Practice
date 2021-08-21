#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)

    printf("Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)\n\n");
    
    int num;

    printf("Please Enter The Number : \n");
    scanf("%d", &num);

    printf("%d - 1 = %d\n", num , num-1);
    printf("%d - 2 = %d\n", num , num-2);
    printf("%d - 3 = %d\n", num , num-3);

    return 0;
}

