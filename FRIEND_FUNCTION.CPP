//friend function
#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b;
	friend demo sum(demo o1, demo o2);
	public:void setnumber(int n1, int n2)
	{
		a=n1;
		b=n2;
	}
	public:void print()
	{
		cout<<"A=="<<a;
		cout<<"B=="<<b<<endl;
	}
};
demo sum(demo o1,demo o2)
{
	demo o3;
	o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main()
{
	clrscr();
	demo d1,d2,d3;
	d1.setnumber(2,3);
	d1.print();
	d2.setnumber(3,4);
	d2.print();
	d3.print();
	getch();
	return 0;
}





