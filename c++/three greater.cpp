#include<iostream>
using namespace std;
int great(int,int,int);
int main()
{
	int a,b,c;
	cout<<"Enter your three numbers:";
	cin>>a>>b>>c;

	cout<<"a is\t\t"<<a<<"\n and b is\t\t "<<b<<"\nand is\t\t"<<c;
	great(a,b,c);	
}
int great(int x,int y,int z)
{
	if(x>y && x>z)
	{
		cout<<"\n\nRESULT:";
		cout<<"\n\na is greater than b and c";
	}
	else if(y>x && y>z)
	{
		cout<<"\n\nRESULT:";
		cout<<"\n\nb is greater than a and c";
	}
	else
	{
		cout<<"\n\nRESULT:";
		cout<<"\n\nc is greater than a and b";
	}
}
