#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i+2<=n;i++)
    {
        sum=sum+(i*(i+1)*(i+2));
    }
    printf("Sum of series : %d",sum);
}