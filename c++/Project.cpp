#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
class student
{
  private :
   char name[100];
   int roll_no,age;
   float marks;
   
   
   public:
   
   int students()
   {
   	cout<<"\t\t\nEnter your name :\t";
   	gets(name);
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
			cout<<"Enter your father name:\t";
			gets(name1);
			cout<<"Enter your mother name:\t";
			gets(name2);
		}
		
		int show()
		{
			system("cls");
			cout<<"\t\t""ROLL_NO\t\t\tSTUDENT\t\t\t  AGE\t\t\t MARKWS \t\t\t FATHER NAME\\t\t\t MOTHER NAME\n\n:";
			cout<<"\t\t"<<roll_no<<"\t\t\t"<<name<<"\t\t\t"<<age<<"\t\t\t"<<marks<<"\t\t\t"<<name1<<"\t\t"<<name2<<"\t\t";
		}
};

int main()
{
	parents p1;
	p1.students();
	p1.detail();
	p1.show()
}
