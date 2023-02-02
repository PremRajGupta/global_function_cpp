#include<iostream.h>
#include<conio.h>
class A
{
    protected:
    int a,b;
    public:
    void input()
    {
	cout<<"Insert a two number=";
	cin>>a>>b;
    }
    void output()
    {
	cout<<a<<" "<<b;
    }
};
class B:public A
{
    public:
    void disp()
    {
	cout<<"second class outpu"<<a<<" "<<b;
    }
};
void main()
{
    clrscr();
    B obj;
    obj.input();
    obj.output();
    obj.disp();
getch();
}