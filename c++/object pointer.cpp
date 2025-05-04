#include<stdio.h>
#include<iostream>
using namespace std;
#include<conio.h>

class a
{
	int a;
		public:
	int fun()
	{
		cout<<"hi";
	}
};
class b : virtual public a
{
  int b;
  	public:
  int fun2()
  {
  	cout<<"hello";
	 }	
};
class c :virtual  public a
{
	int c;
	public:	int fun3()
	{
	cout<<"bye";
	}
	
};
class d: public b,public c
{
	int d;
	public:
	int fun4()
	{
		cout<<"byehello";
	}
	
};
int main()
{
	d d1;
     d *p;
     p=&d1;
   p->fun4();
   p->fun3();
   p->fun2();
   p->fun();	
	cout<<"size of :"<<sizeof(d1);
}
