#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Percentage of 5 Subjects

    printf("Percentage of 5 Subjects..\n\n");

    int s1,s2,s3,s4,s5;

    printf("Subject 1 = Maths\nSubject 2 = Science\nSubject 3 = English\nSubject 4 = Gujarati\nSubject 5 = Computer\n\n");

    printf("Please Enter Subject 1 Mark\n");
    scanf("%d", &s1);
    printf("Please Enter Subject 2 Mark\n");
    scanf("%d", &s2);
    printf("Please Enter Subject 3 Mark\n");
    scanf("%d", &s3);
    printf("Please Enter Subject 4 Mark\n");
    scanf("%d", &s4);
    printf("Please Enter Subject 5 Mark\n");
    scanf("%d", &s5);

    printf("The Total Mark Is %d. And The Percentage Of 5 Subject Is %d\n", s1+s2+s3+s4+s5 , (s1+s2+s3+s4+s5)/5);
    
    return 0;

}