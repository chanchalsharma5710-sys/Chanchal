#include<stdio.h>
int main()
{
int a;
printf("enter a numher");
scanf("%d",&a);
if(a)
printf("inside the block");
printf("value of a=%d",a);
printf("outside the block");
return 0;
}
