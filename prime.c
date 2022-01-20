#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n=======================");
    for(int i = 2; i <= num / 2; i++)
        if(num % i == 0)
        {
            puts("\nIt's not a prime number\n=======================");
            return 0;
        }
    puts("\nIt's a prime number\n=======================");
}

/*
ALGORITHM
1. Start
2. Take input from user, i.e. num
3. Iterate a variable i from 2 to half of the number, i.e. i goes from 2 to num/2
    a) if num is divisible by i
         i) Show that number is not prime
        ii) End
4. Show that number is prime
5. End
*/
