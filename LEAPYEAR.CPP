#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter a year");
scanf("%d",&a);
b=a%4;
if(b==0)
printf("this number is leap year");
else{
printf("this is not a leap year");
}
getch();x

}