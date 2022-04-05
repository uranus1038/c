#include <stdio.h>
#define True 0
int Roman_Cal(int num) ;
int Input_info();
int Info();

int main()
{
    Info();
    return 0;
}
int Info()
{
    do
    {
        Input_info();
    }while(True != 1);
}
int Input_info()
{

   int x , y , press , num;
   do
   {
    printf("[press 1. +]\n");
    printf("[press 2. -]\n");
    printf("[press 3. x]\n");
    printf("[press 4. /]\n");
    printf("Enter a number: ");
    scanf("%d", &press);
    switch(press)
    {
        case 1:
        printf("Enter Add number :");
        scanf("%d",&x);
        printf("Enter Add number :");
        scanf("%d",&y);
        num = x+y;
        press = 1 ;
        break ;
        case 2:
        printf("Enter Add number :");
        scanf("%d",&x);
        printf("Enter Add number :");
        scanf("%d",&y);
        num = x-y;
        press = 1 ;
        break ;
        case 3:
        printf("Enter Add number :");
        scanf("%d",&x);
        printf("Enter Add number :");
        scanf("%d",&y);
        num = x*y;
        press = 1 ;
        break ;
        case 4:
        printf("Enter Add number :");
        scanf("%d",&x);
        printf("Enter Add number :");
        scanf("%d",&y);
        num = x*y;
        press = 1 ;
        break ;
        default :
        printf ("\t\tPlease enter again.\n");
   }
   }while(press != 1 );


    printf("Roman number  >>>  : ");
    Roman_Cal(num);
    printf("\n");

}
int Roman_Cal(int num)
{

    while(num != 0)
    {

        if (num >= 1000)
        {
           printf("M");
           num -= 1000;
        }

        else if (num >= 900)
        {
           printf("CM");
           num -= 900;
        }

        else if (num >= 500)
        {
           printf("D");
           num -= 500;
        }

        else if (num >= 400)
        {
           printf("CD");
           num -= 400;
        }

        else if (num >= 100)
        {
           printf("C");
           num -= 100;
        }

        else if (num >= 90)
        {
           printf("XC");
           num -= 90;
        }

        else if (num >= 50)
        {
           printf("L");
           num -= 50;
        }

        else if (num >= 40)
        {
           printf("XL");
           num -= 40;
        }

        else if (num >= 10)
        {
           printf("X");
           num -= 10;
        }

        else if (num >= 9)
        {
           printf("IX");
           num -= 9;
        }

        else if (num >= 5)
        {
           printf("V");
           num -= 5;
        }

        else if (num >= 4)
        {
           printf("IV");
           num -= 4;
        }

        else if (num >= 1)
        {
           printf("I");
           num -= 1;
        }
        else if (num <=0)
        {
            printf("none");
        }

    }
}

