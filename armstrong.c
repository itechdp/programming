#include <stdio.h>
#include <conio.h>

int main ()

{
    int rem,count=1,num,sum;

        // printf("\nEnter a No. between (1 to 500)");
        //     scanf("%d",&count);

    while (count<=500)
    {
         num=count;
         sum=0;
    }

    while (num)
    {
        rem=num%10;
        sum= sum+(rem*rem*rem);
        num=num/10;
    }
    
    if (count==sum);
    {
        printf("%d is a armstrong number\n", count);
    }
    
    count++;

    return 0;    
}