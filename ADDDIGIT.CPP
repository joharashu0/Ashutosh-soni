#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,rem=0,sum=0;
cout<<"enter a number";
cin>>num;
int temp=num;
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
cout<<"sum of the digits of"<<temp<<"is"<<sum;
getch();
}