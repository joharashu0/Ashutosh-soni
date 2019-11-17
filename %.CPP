#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int n1,n2,n3,n4,n5,sum,percentage;
cout<<"enter the value of n1\n";
cin>>n1;
cout<<"enter the value of n2\n";
cin>>n2;
cout<<"enter the value of n3\n";
cin>>n3;
cout<<"enter the value of n4\n";
cin>>n4;
cout<<"enter the value of n5\n";
cin>>n5;
sum=n1+n2+n3+n4+n5;
cout<<"the sum of five marks="<<sum<<endl;
percentage=(sum*100)/500;
cout<<"the percentage of five subject marks="<<percentage<<endl;
getch();
return 0;
}