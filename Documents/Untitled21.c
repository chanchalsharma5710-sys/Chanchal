#include<stdio.h>
int main()
{
int day;
printf("enter the days(1-4)");
scanf("%d",&day);
switch (day)
{
case 1:
printf("sunday");
break;
case 2:
printf("monday");
break;
case 3:
printf("tuesday");
break;
case 4:
printf("wenesday");
break;
}
{defaut:
    printf("invalid");
}
return 0;
}
