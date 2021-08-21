#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Gross Salary of an Employee

    printf("Gross Salary of an Employee...\n\n");

    float basic_salary,dearness_allowance,house_rent_allowance,transport_allowance,statutory_bonus;

    printf("Please Enter Basic Salary : \n");
    scanf("%f", &basic_salary);

    printf("\n");

    // 50% of [basic salary + DA] for those living in metro cities (40% for non-metros)

    dearness_allowance = (basic_salary * 28)/100;
    house_rent_allowance = (basic_salary + dearness_allowance)*0.5;
    transport_allowance = 1600;
    statutory_bonus = (basic_salary * 8.33)/100;

    printf("Your Dearness Allowance Is = %f\n", dearness_allowance);     
    printf("Your House Rent Allowance  Is = %f\n", house_rent_allowance);     
    printf("Your Transport Allowance Is = %f\n", transport_allowance);     
    printf("Your Statustory Bouns Is = %f\n\n", statutory_bonus);
 
    printf("Your Gross Salary Is : %0.2f\n", basic_salary+dearness_allowance+house_rent_allowance+transport_allowance+statutory_bonus);

    return 0;
}
