#include<iostream.h>
#include<conio.h>
class A
{
    private:
    int a,b;
    public:
    void input()
    {
	cout<<"Enter two value=";
	cin>>a>>b;
    }
    void show()
    {
	cout<<a<<" "<<b<<endl;
    }
};
void main()
{
    clrscr();
    A obj;
    obj.input();
    obj.show();
getch();
}