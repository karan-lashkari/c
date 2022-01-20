#include<stdio.h>

int main()
{
printf("\tWELCOME\n");	
int age, currentyear, birthyear;
currentyear= 2022;
	printf("Enter Your Birth Year: ");
	scanf("%d",&birthyear);
	age = currentyear-birthyear;
	printf("You Are '%d' Years Old\n",age);
}