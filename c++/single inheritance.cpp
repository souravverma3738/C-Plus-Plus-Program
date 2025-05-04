#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class student
{
  public :
   char name[100];
   int roll_no,age;
   float marks;
   
   
   public:
   
   int students()
   {
   	fflush(stdin);
   	cout<<"\t\t\nEnter your name :\t";
   	gets(name);
   	fflush(stdin);
   	cout<<"\t\t\nEnter your roll_no\t";
   	cin>>roll_no;
   	cout<<"\t\t\nEnter your Age\t";
   	cin>>age;
   	cout<<"\t\t\nEnter your marks:\t";
   	cin>>marks;
   }
};

class parents : public student
{
	char name1[100],name2[100];
	public:
		int detail()
		{
			cout<<"\t\n\nEnter your parents name:\t";
			fflush(stdin);
			cout<<"Enter your father name:\t";
			gets(name1);
			fflush(stdin);
			cout<<"Enter your mother name:\t";
			gets(name2);
		}
		
		int show()
		{
			system("cls");
			cout<<"\tROLL_NO\tSTUDENT\tAGE\t MARKWS \t FATHER NAME\t MOTHER NAME\n\n:";
			cout<<"\t"<<roll_no<<"\t"<<name<<"\t"<<age<<"\t"<<marks<<"\t"<<name1<<"\t"<<name2<<"\t\t";
		}
};

int main()
{
	parents p1;
	p1.students();
	p1.detail();
	p1.show();
}
