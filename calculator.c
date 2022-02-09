#include <stdio.h>
#include<math.h>

int main()
{
    char a;
    float b,c,d;

    printf("What You Want to do:-\n(1)Addition\t\t(2)Substraction\n(3)Multiplication\t(4)Division\n(5)Square\t\t(6)Square Root\n");
    scanf("%c",&a);
    printf("==============================\n");

    switch(a){
        case '1' : printf("\tADDITION\n\n");
                printf("Enter the 2 numbers:" );
                scanf("%f+%f",&b,&c); 
                d = b + c;
                printf("Your Answer is     :%.2f\n",d);
                break;
        case '2' : printf("\tSUBSTRACTION\n\n");
                printf("Enter the 2 numbers:" );
                scanf("%f-%f",&b,&c); 
                d = b - c;
                printf("Your Answer is     :%.2f\n",d);
                break;
        case '3' : printf("\tMULTIPLICATION\n\n");
                printf("Enter the 2 numbers:");
                scanf("%f*%f",&b,&c); 
                d = b * c;
                printf("Your Answer is     :%.2f\n",d);
                break;
         case '4' : printf("\tDIVISION\n\n");
                printf("Enter the 2 numbers:");
                scanf("%f/%f",&b,&c); 
                d = b / c;
                printf("Your Answer is     :%.2f\n",d);
                break;
        case '5' : printf("\tSQUARE\n\n");
                printf("Enter the numbers:");
                scanf("%f",&b); 
                d = b * b;
                printf("Your Answer is     :%.2f\n",d);
                break;
        case '6' : printf("\tSQUARE ROOT\n\n");
                printf("Enter the numbers:");
                scanf("%f",&b); 
                d = sqrt(b);
                printf("Your Answer is    :%.2f\n",d);
                break;
    }
}
