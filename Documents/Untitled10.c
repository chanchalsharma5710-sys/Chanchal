#include<stdio.h>
int main ()
{
int a;
printf("enter a number");
scanf ("%d",&a);
if(a)
printf("inside the block");
printf("vaiue of a=%d",a);
printf("outside the block");
return 0;
}
