#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int a[n];
    int b=0,c=n;
    for(int i=1;i<=n;i++)
     { 
         if(i%2==0)
        {a[c]=i;
         c--;
        }
        else
        {
            a[b]=i;
            b++;
        }
     }
     for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
}