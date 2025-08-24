#include<iostream.h>
#include<conio.h>
class demo
{
	int arr[5];
	public:
		void value();
		void show();
};
void demo::value()
{
	cout<<"enter value for array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
}
void demo::show()
{
	cout<<"value of array is:\n";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
}

void main()
{
	clrscr();
	demo d;
	d.value();
	d.show();
	getch();
}