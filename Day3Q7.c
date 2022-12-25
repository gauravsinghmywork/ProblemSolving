#include<stdio.h>
void main()
{
    int a,sum=0,facto;
    printf("Enter the number : ");
    scanf("%d",&a);
    facto=fact(a);
    int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(sum=sum+(i*power(-1,i+1)));
}
printf("Sum is %d",sum);
}