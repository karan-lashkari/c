#include<stdio.h>

int main()
{
   int age;
   printf("Enter your age: ");
	scanf("%d", &age);

   if (age > 17) printf("You are eligible for driving license.\n");
   else {
      printf("You are not eligible for driving license.\n");
      if (age > 15) printf("You can only get learning license.\n");
   }
   return 0;
}
