//default argument constructor
#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a;
	emp(int x=0)
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
	clrscr();
	emp e1(20);
	e1.show();
	getch();
	return 0;
}