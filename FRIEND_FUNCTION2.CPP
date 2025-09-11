#include<iostream.h>
#include<conio.h>
class point
{
	int x;
	int y;
	public:
		friend void sum_fun(point);
		void add_data(int x1=0,int y1=0)
		{
			x=x1;
			y=y1;
		}
		void display()
		{
			cout<<"x="<<x<<"\n";
			cout<<"y="<<y<<"\n";
		}
};
void sum_fun(point obj1)
{
	int s;
	s=obj1.x+obj1.y;
	cout<<"sum of 2 member using friend function:"<<s<<endl;
}
void main()
{
	clrscr();
	point p1;
	p1.add_data(5,3);

	cout<<"point 1\n";
	p1.display();

	cout<<"the sum of the two points is:\n";
	p1.display();

	sum_fun(p1);
	getch();
}