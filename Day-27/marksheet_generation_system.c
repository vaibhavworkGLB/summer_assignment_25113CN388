# include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float m1, m2, m3, total, percentage;
};

int main()
{
    struct Student s;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &s.m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &s.m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.m1);
    printf("Subject 2   : %.2f\n", s.m2);
    printf("Subject 3   : %.2f\n", s.m3);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if (s.percentage >= 90)
        printf("Grade       : A+\n");
    else if (s.percentage >= 75)
        printf("Grade       : A\n");
    else if (s.percentage >= 60)
        printf("Grade       : B\n");
    else if (s.percentage >= 40)
        printf("Grade       : C\n");
    else
        printf("Grade       : F (Fail)\n");

    return 0;
}