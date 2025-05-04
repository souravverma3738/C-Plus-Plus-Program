#include<iostream>
using namespace std;
int main()
{
	int n,i,b;
	cout<<"Enter your n number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		b=i*b;
	   cout<<"\n"<<b<<"\t*\t"<<i<<"=\t"<<b<<"\n";
	}
	cout<<"factorail is:"<<b;
}
