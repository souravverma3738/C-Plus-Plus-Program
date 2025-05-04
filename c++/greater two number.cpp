#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter your two numbers:";
	cin>>a>>b;
	greater(a,b);
	cout<<"a is"<<a<<"\n and b is "<<b;
	
}
int greater(int x, int y)
{
	if(x>y)
	{
		cout<<"a is greater than b";
	}
	else
	{
		cout<<"b is greater than a";
	}
}
