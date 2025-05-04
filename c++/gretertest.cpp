#include<iostream>
using namespace std;
int great(int,int);
int main()
{
	int a,b;
	cout<<"Enter your two numbers:";
	cin>>a>>b;

	cout<<"a is\t\t"<<a<<"\n and b is\t\t "<<b;
	great(a,b);	
}
int great(int x, int y)
{
	if(x>y)
	{
		cout<<"\n\nRESULT:";
		cout<<"\n\na is greater than b";
	}
	else
	{
		cout<<"\n\nRESULT:";
		cout<<"\n\nb is greater than a";
	}
}
