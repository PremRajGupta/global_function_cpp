#include<iostream.h>
#include<conio.h>
void fun()
{
    class A
    {
	private:
	int a,b;
	public:
	void show()
	{
	    cout<<"Enter two number=";
	    cin>>a>>b;
	    cout<<"a="<<a<<"b="<<b;
	}
    };
    A obj;
    obj.show();
}
void main()
{
    clrscr();
    fun();
    getch();
}