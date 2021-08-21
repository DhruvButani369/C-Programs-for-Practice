#include <stdio.h>

int main(int argc, char const *argv[])
{
   // Converting Temperature Celsius into Fahrenheit

   printf("Converting Temperature Celsius into Fahrenheit..\n\n");

   float celsius;
   float fahrenheit;

   printf("Please Enter Celsius To Converting Into Fahrenehit : \n");
   scanf("%f", &celsius);

   fahrenheit = (celsius*(1.8)) + 32;

   printf("Fahrenheit Is : %f" , fahrenheit);

   return 0;
}
