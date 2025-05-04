#include<iostream>
using namespace std;
class viper
{
	
	static int  a,b,c;
	
	public:
		static int add()
		{
			cout<<"Enter a and b:  ";
			cin>>a>>b;
			c=a+b;
			cout<<"\nc="<<c;
		}
};
int viper::a;
int viper::b;
int viper::c;
int main()
{
	viper::add();
}

