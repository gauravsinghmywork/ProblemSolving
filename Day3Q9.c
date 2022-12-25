#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
         printf("*");

        printf("  ");
    }

}