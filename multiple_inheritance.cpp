//example of multiple inheritance 
#include <iostream.h>
#include<conio.h>

class A
{
protected:
    int x;
public:
    int y;
};

class B
{
protected:
    int z;
};

class C : public A, public B
{
public:
    void assign()
    {
	x = 10;
	y = 20;
	z = 30;
    }

    void show()
    {
	cout << "\n\nClass C Output:\n";
	cout << "\nx: " << x;
	cout << "\ny: " << y;
	cout << "\nz: " << z;
    }
};

int main()
{
    clrscr();
    C o_c;
    o_c.assign();
    o_c.show();
    getch();
    return 0;
}
