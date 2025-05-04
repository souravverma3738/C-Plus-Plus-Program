#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter year to check  for leaping:";
	cin>>a;
	
	if(a%4==0)
	{
		cout<<"this is a leap year";
	}
	else
	{
		cout<<"this s not a leap year";
	}
}
