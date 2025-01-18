#include<stdio.h>
int main()
{
    float a,b;
    printf("enter temperature  in celsius : ");
    scanf("%f",&a);
    
    b=(a*9/5)+32;
printf("temperature in fahrenheit :%f ",b);
return 0;
}