#include<iostream>
#include<conio.h>
using namespace std;
class students
{
  int rollno;
  char name[20];
  public: 
  
  int details()
  {
      cout<<"Enter your name:\t";
	  gets(name);
	  cout<<"Enter your roll_no:\t";
	  cin>>rollno;	
   }	
};
class parents: public students
{
	char name1[20];
	int age;
	public:
		int details()
		{
			cout<<"Enter parents name:\t";
			gets(name1);
			cout<<"Enter your age:\t";
			cin>>age;
		}
};
int main()
{
	parents p1;
	p1.details();
	p1.students::details();
}
