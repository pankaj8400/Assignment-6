#include<stdio.h>
int main()
{
    int i,reverse=0,remainder,num;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        remainder=num%10;
        num=num/10;
        reverse=reverse*10+remainder;
    }
    printf("Reverse is %d",reverse);
    return 0;
}
