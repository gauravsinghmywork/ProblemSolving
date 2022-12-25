#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,sum=1,f=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
     printf("Enter the value of x : ");
    scanf("%d",&x);
    for(int i=1;i<n;i++)
    {
       f=f*i;
       sum=sum+(pow(x,i)/f);
    }
    printf("Sum of Series is : %d",sum);
}