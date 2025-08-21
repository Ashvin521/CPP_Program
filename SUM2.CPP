#include<iostream.h>
#include<conio.h>
int sum(int a,int b)
{
	int c=a+b;
	return c;
}
int main()
{
	int num1,num2;
	clrscr();
	cout<<"enter number1"<<endl;
	cin>>num1;
	cout<<"enter number2"<<endl;
	cin>>num2;
	cout<<"the sum is"<<sum(num1,num2);
	getch();
	return 0;
}