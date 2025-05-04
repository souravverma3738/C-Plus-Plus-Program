#include<iostream>
using namespace std;
class calculate
{
	int a,b;
	public:
		calculate(int x,int y)
		{
			a=x;
			b=y;
		}
		int circle(int a,int b)
		{ 
		int l,h;
			l=this->a*a;
			h=this->b*b;
			cout<<"l"<<l;
			cout<<"h"<<h;
		}
};

int main()
{
	calculate c1(10,20);
	
	c1.circle(2,2);
}
