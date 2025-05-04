#include<iostream>
#include<conio.h>
using namespace std;

class students
{
  char name[100];
  int roll_no;
 public:
 int detail()
 {
 	cout<<"Enter your name:\t";
 	gets(name);
 	cout<<"Enter your roll_no:\t";
 	cin>>roll_no;
 	
	 }	
	 
};
class parents : public students
{
	char name[100];
	public:
		
		int detail()
		
		{
			fflush(stdin);
			cout<<"Enter parents name:";
			gets(name);
		}
};
int main()
{
   parents p1;
   p1.students ::detail();
   p1.detail();	
}
