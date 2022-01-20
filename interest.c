#include<stdio.h>

int main()
{
 int pageviews = 100;
 
 pageviews = pageviews + 1;
 printf("page views: %d \n",pageviews);
 pageviews = pageviews + 1;
 printf("page views: %d \n",pageviews);
 pageviews = pageviews + 1;
 printf("page views: %d \n",pageviews);
 
 float balance = 100.00;
 
 balance += 1.1;
 printf("balance: %f\n",balance);
 balance -= 1.1;
 printf("balance: %f\n",balance);
 balance *= 1.1;
 printf("balance: %f\n",balance);
}
