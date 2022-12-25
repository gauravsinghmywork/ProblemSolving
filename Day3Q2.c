#include<stdio.h>
void main()
{
    int n,sum=0,f=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       f=f*i;
       sum=sum+f/i;
    }
    printf("Sum of Series is : %d",sum);
}