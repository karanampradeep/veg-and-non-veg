#include<stdio.h>
void main()
{
int mopt,sopt;
printf("1.veg\n 2.non-veg\n \n Enter your option");
scanf("%d",&mopt);
switch(mopt)
{
case 1: printf("1.Lemon rice\n 2.Curd rice\n Enter your item\n");
scanf("%d",&sopt");
switch(sopt)
{
case 1:printf("Rs.20\n");
break;
case 2:printf("Rs.25\n");
break;
default:printf("\n Invalied option");
}
break;
case 2:printf("1.Chicken biryani\n 2.Muttton biryani\n Enter your item\n");
scanf("%d",&sopt);
switch(sopt)
{
case 1:printf("Rs.180\n");
break;
case 2:printf("Rs.210\n");
break;
default:printf("Invalied option");
break;
default:printf("Invalied option");
}
