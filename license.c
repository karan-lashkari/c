#include<stdio.h>

int main()
{
   int age;
   printf("Enter your age: ");
	scanf("%d", &age);

   if (age > 60){printf("you are too old for driving license.\n");}
   else if (age > 17){ printf("You are eligible for driving license.\n");}
      else if (age > 15) {printf ("You can only get learning license.\n");}
      else {printf("You are too small for driving license.\n");}    
}

// ALGORITHM
// 1. Start
// 2. Declare variable integer 'age'.
// 3. Take value of 'age' from the user.
// 4. Check condition.If age is greater than 60 go to step 5 else go to step 6.
// 5. print you are too old for license and go to step 11.
// 6. Check condition. If age is greater than 17 go to step 7 else go to step 8.
// 7. print you are eligible for driving license and go to step 11.
// 8. Check condition. If age is greater than 15 go to step 9 else go to step 10.
// 9. print you can only get learning license and go to step 11.
//10. print you are too small for driving license.
//11. End