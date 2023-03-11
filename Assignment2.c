#include<stdio.h>
int main()
{
    int i, num, tmp =0;
    printf("Enter Number to Check:");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            tmp++;
            break;
        }
    }
    if(tmp==0 && num!=1)
    {
        printf("%d is a Prime Number", num);
    }
    else
    {
        printf("%d is not a Prime Number", num);
    }
    return 0;
}
