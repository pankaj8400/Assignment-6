#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter any no: ");
    scanf("%d",&n);

    for(i=0;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("\nSum of first even  %d number is: %d",n,sum);
    return 0;
}
