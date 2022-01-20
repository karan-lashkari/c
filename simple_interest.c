#include<stdio.h>

int main()
{
    float principle_amount, time, rate, simple_interest;

    printf("\nPrinciple amount\t: ");
    scanf("%f", &principle_amount);
    printf("Time\t\t\t: ");
    scanf("%f", &time);
    printf("Rate of interest\t: ");
    scanf("%f", &rate);

    simple_interest = (principle_amount * time * rate) / 100;
    printf("===================================\n");
    printf("Simple interest\t\t: %0.2f\n\n", simple_interest);
}
