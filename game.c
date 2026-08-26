#include <stdio.h>
int main()
{
    int number = 32;
    int a;
    printf("guess btw 1-50\n");
    do
    {
        printf("enter your number\n");
        scanf("%d",&a);
         if (a > 50)
        {
            printf("number is too high\n");
        }
        else if (a > 40)
        {
            printf("number is  high\n");
        }
        else if (a > 32 && a < 40)
        {
            printf("number is little bit high\n");
        }
         else if (a > 32 && a <35)
        {
            printf("you are very close\n");
        }
         else if (a < 32 && a >28)

        {
            printf("you are very close\n");
        }
        else if (a < 32 && a > 20)
        {
            printf("number is little bit low\n");
        }
        else if (a < 20)
        {
            printf("number is  low\n");
        }
else 
printf("great you find it\n");
    }
     while (number != a);
return 0;
}