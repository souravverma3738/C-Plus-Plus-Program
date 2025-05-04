#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class bank
{
  private:
       int eid;
	   char contact[100];
	   char name[100],address[1000];	
		float salary;
		float money1,money,withdraw1;
public:	
		bank()
		{
			eid=0;
			money=0.00;
			withdraw1=0.00;
		}

			 
		int addemployee()
		{
			eid++;
			fflush(stdin);
			cout<<"Enter your first name:\t";
			gets(name);
			fflush(stdin);	
			cout<<"\nEnter your contact number:\t";
			gets(contact);
			fflush(stdin);
			cout<<"\nEnter your address:\t";
			gets(address);
				fflush(stdin);
			cout<<"\nEnter your salary:\t";
			cin>>salary;
			
			//mainu();
			
		}
		
	    int disply()
	    {
	    	cout<<"*********ACCOUNT DETAILS********";
	    	cout<<"\t\tEMPLOYEE ID \t\t NAME\t\t BALANCE";
			cout<<"\n\t\t\t"<<eid<<"\t\t"<<name<<"\t\t"<<money; 
		}
		int deposit()
		{
			cout<<"\t\t\n\nEnter your  amount:";
			cin>>money1;
			money=money+money1;
			system("cls");
			cout<<"\n\n\t\t++++++++DEPOSIT SUCESSFULLY***** ";
			
		}
		int withdraw()
		{
			system("cls");
			ciricle:
			cout<<"\t\t\n\nEnter your amount:";
			cin>>withdraw1;
			if(money<withdraw1)
			{
				system("cls");
				cout<<"\n\n\t\t******INVALID BALANCE******";
			    goto ciricle;
			}
			else
			{
			
				money=money-withdraw1;
				cout<<"\n\n\t\t******WITHDRAW SUCESSFULL******";
	    	}
		}
};

int main()
{
	bank b1;
	int n,i;
	
	
		account:
		for(i=0;i<10;i++)
		{
			
		system("cls");
		
		cout<<"Enter number to visit:\t";
		
    	cout<<" \n\n\t\t1 FOR ADD EMPLOYEE:";
    	cout<<" \n\t\t2 FOR DISPPLAY DETAIL:";
    	cout<<" \n\t\t3 FOR DEPSIT MOENY: ";
    	cout<<" \n\t\t4 FOR WITHDRAW MONEY:";
    	cout<<" \n\t\t5 FOR EXIT:\n";
    	cin>>n;
    	
	
		switch(n)
		{
		     case 1:
				 b1.addemployee();	
				 break;
		 
			 case 2:
			 	b1.disply();
			   getch();
			 	break;
			 case 3:
				 b1.deposit();
				 break;
		 
		 	case 4:
		 		b1.withdraw();
				 break;
		 
			 case 5:
			 	exit(0);
			 	
			 	default:
			 		cout<<"INVALID NUMBER AND TRY AGAIN";
			 		goto account;
		}
	}
}
