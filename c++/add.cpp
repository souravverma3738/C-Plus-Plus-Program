#include<iostream>
using namespace std;
int add(int );
int main()
{
	int a;
	cout<<"Enter your number which u want to check :";
	cin>>a;
	add(a);	
}
int add(int x)
{
	if(x%2!=0)
	{
		cout<<"this is a odd number";
	}
	else 
	{
		cout<<"this is a even number";
	}
	
}
