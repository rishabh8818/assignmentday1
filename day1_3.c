#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first value : ");
    scanf("%d",&a);
    printf("enter second value : ");
    scanf("%d",&b);
  b=a+b;
  a=b-a;
b=b-a;
   printf(" first value :%d",a);
    
    printf(" second value :%d ",b);
    
return 0;
}