#include<stdio.h>
#include<math.h>
main()
{
    int a,count=1;
    float f,d;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i=2;i<a;i++)
        if(a%i!=0)
           count++;
    if(count==a-1)
      printf("Prime Number");
    else 
    printf("Non-Prime Number\n");

f=a/2;
d=sqrt(a);
 printf("%f\n",f);



      if(a==1)
        printf("Least Prime Factor : 1\n");
    else if(a%2==0)
       printf("Least Prime factor : 2\n");
    else
    {for(int i=3;i<=d;i++)
    {
        if(a%i==0)
        printf("Least Prime Number : %d\n",i);
    }
    }
}