#include<iostream>
using namespace std;
int main()
{
	int a,i,b=0;
	cout<<"Enter number to  check total sun:";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		 b=i+b;
	}
	cout<<"total sum is"<<b;
}
