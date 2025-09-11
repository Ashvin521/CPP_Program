//explicit constuctor
#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a;
	emp()
	{
		a=0;
	}
	emp(int x)
	{
		a=x;
	}
	public:void show()
	{
		cout<<"A=="<<a<<endl;
	}
};
int main()
{
	emp e=emp(20);
	e.show();
	emp e1(30);
	e1.show();
	getch();
	return 0;
}




