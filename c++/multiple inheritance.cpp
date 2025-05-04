#include<iostream>
#include<conio.h>
using namespace std;
#include<string.h>
#include<stdlib.h>
class bank
{
  private:
  
      int n,account_number,age,age1,age123;
	  char accname[100],city[1000],contact_number[100],address[1000],contact_number12[100],contact_number123[100];
	  float balance,balance12,balance123,withdraw;
	  char address1[100],cityname12[100],cityname123[100];
	  int answer;
	  
public:	   
      bank()
	  {
	  	account_number=1000;
	  	balance=0.00;
	  }
	  int bank_details()
	  {
	  
	  sourav:	
	  system("cls");
	  cout<<"\t\t\nEnter you number:\t\t";
	  
	  cout<<"\n\n\t\t\nEnter 1 FOR CREATE ACCOUNT:\n";
	  cout<<"\t\t\nENTER 2 FOR CHECK BALACNE:\n";
	  cout<<"\t\t\nENTER 3 FOR DEPOSIT MONEY:\n";
	  cout<<"\t\t\nENTER 4 FOR WITHDRAW MONEY:\n";
	  cout<<"\t\t\nENTER 5 FOR EXIT:\t\n";
	  cin>>n;
	  
	  
	  switch(n)
	  {
	  	case 1:
	  		account_number++;
	  		fflush(stdin);
	  		cout<<"\nEnter your name:\t";
	  		gets(accname);
	  		cout<<"\nEnter your age:\t";
	  		cin>>age;
	  		fflush(stdin);
	  		cout<<"\nEnter your contact number:\t";
	  		gets(contact_number);
	  		cout<<"\nEnter your city name:\t";
	  		fflush(stdin);
	  		gets(city);
	  		fflush(stdin);
			cout<<"\nEnter your address:\t";
	  		gets(address);
	  		cout<<"\nEnter your balance:\t";
	  		cin>>balance;
	  		
	  		
	  		
			  system("cls");
			  cout<<"\tACCOUNT NUMBER \t NAME \t AGE \t CONTACT NUMBER  \t CITY \t  BALANCE \t  ADDRESS\t\n";	
	  		   cout<<"\t"<<account_number<<"\t\t"<<accname<<"\t"<<age<<"\t"<<contact_number<<"\t"<<city<<"\t"<<balance<<"\t"<<address<<"\t";
	  		   cout<<"\t\t\n\nCHECK YOUR DETAILS:";
	  		  
			  cout<<"\nEnter 1 FOR YES AND 0 FOR NO";
	  		  cin>>answer;
	  		   if(answer==1)
	  		   {
	  		   	    system("cls");
	  		    	bank_details(); 
			   }
				 else if(answer==0)
				 {
				 	char text[100];
				 	char name12[100];
				 	char newage[100]={"age"};  
				    char newname[100]={"name"};	 
			    	char newaddress[100]={"address"};	 
				    char  newcity[100]={"city"};
				   	char  newbalance[100]={"balance123"};
				   	char  newcontactnumber[100]={"contact number"};
					wrong:
						system("cls");
						fflush(stdin);
				 	cout<<"ENTER YOUR WRONG COLOUM NAME:\t";
				 	gets(text);
				 	
				 
				   if(strcmp(text,newname)==0)
				 	{
				 		fflush(stdin);
				 		cout<<"Enter your name:\t";
				 		gets(name12);
				 	
				 		system("cls");
					   cout<<"\n\tACCOUNT NUMBER \t NAME \t AGE \t CONTACT NUMBER  \t CITY \t  BALANCE \t  ADDRESS\t\n";	
		  			   cout<<"\t"<<account_number<<"\t\t"<<name12<<"\t"<<age<<"\t"<<contact_number<<"\t"<<city<<"\t"<<balance<<"\t"<<address<<"\t";
		  			 getch(); 
					} 
				
				 	else if(strcmp(text,newage)==0)
				 	{
				 		fflush(stdin);
				 		cout<<"Enter your age:\t";
				 		cin>>age1;
				 		age123=age1;
				 		
					   cout<<"\n\tACCOUNT NUMBER \t NAME \t AGE \t CONTACT NUMBER  \t CITY \t  BALANCE \t  ADDRESS\t\n";	
		  			   cout<<"\t"<<account_number<<"\t\t"<<accname<<"\t"<<age123<<"\t"<<contact_number<<"\t"<<city<<"\t"<<balance<<"\t"<<address<<"\t";
		  			  	getch();
							 }
				
				 	else if(strcmp(text,newaddress)==0)
				 	{
				 		fflush(stdin);
				 		cout<<"Enter your address:\t";
				 		gets(address1);
				 		
				 		
					   cout<<"\n\tACCOUNT NUMBER \t NAME \t AGE \t CONTACT NUMBER  \t CITY \t  BALANCE \t  ADDRESS\t\n";	
		  			   cout<<"\t"<<account_number<<"\t\t"<<accname<<"\t"<<age<<"\t"<<contact_number<<"\t"<<city<<"\t"<<balance<<"\t"<<address1<<"\t";
		  			   getch();
				   }
			
				 	else if(strcmp(text,newcity)==0)
				 	{
				 		fflush(stdin);
				 		cout<<"Enter your city name:\t";
				 		gets(cityname12);
				 	
				 		
					   cout<<"\n\tACCOUNT NUMBER \t NAME \t AGE \t CONTACT NUMBER  \t CITY \t  BALANCE \t  ADDRESS\t\n";	
		  			   cout<<"\t"<<account_number<<"\t\t\t"<<accname<<"\t"<<age<<"\t"<<contact_number<<"\t"<<cityname12<<"\t"<<balance<<"\t"<<address<<"\t";
		  			   getch();
				   }
				
				 	else if(strcmp(text,newbalance)==0)
				 	{
				 		fflush(stdin);
				 		balance=0;
				 		cout<<"Enter your balance:\t";
				 		cin>>balance12;
				 		balance=balance12;
				 		getch();
					   cout<<"\n\tACCOUNT NUMBER \t NAME \t AGE \t CONTACT NUMBER  \t CITY \t  BALANCE \t  ADDRESS\t\n";	
		  			   cout<<"\t"<<account_number<<"\t\t\t"<<accname<<"\t"<<age<<"\t"<<contact_number<<"\t"<<city<<"\t"<<balance<<"\t"<<address<<"\t";
		  			   getch();
				   }
				    
				 	else if(strcmp(text,newcontactnumber)==0)
				 	{
				 		fflush(stdin);
				 		cout<<"Enter your contact number:\t";
				 		gets(contact_number12);
				 		getch();
					   cout<<"\n\tACCOUNT NUMBER \t NAME \t AGE \t CONTACT NUMBER  \t CITY \t  BALANCE \t  ADDRESS\t\n";	
		  			   cout<<"\t"<<account_number<<"\t\t\t"<<accname<<"\t"<<age<<"\t"<<contact_number12<<"\t"<<city<<"\t"<<balance<<"\t"<<address<<"\t";
		  			   getch();
					  }
					else
					{
						fflush(stdin);
						cout<<"invlaid name:";
					}
					system("cls");
					cout<<"\t\t\n\nCHECK YOUR DETAILS:";
		  			   cout<<"\nEnter 1 FOR YES AND 0 FOR NO";
		  			   cin>>answer;
		  			  if(answer==1)
		  			   { system("cls");
		  			    	goto sourav; 
						}
						else
						{
							system("cls");
						   goto wrong;	
						}
					 
         	  }
         	  system("cls");
         	  break;
         	  
         	  
         	  case 2:
         	  	cout<<"Your account balance is: \t\t";
         	  	cout<<"\t\t "<<balance;
         	  	getch();
         	  	
         	  		goto sourav;
         	  		break;
         	  	
			   case 3:
			   	
			   	cout<<"Enter your moeny for deposit:\t";
			   	cin>>balance123;
			   	balance=balance123+balance;
			   	system("cls");
			   	cout<<"\n\t\t****DEPOSIT SUCESSFULLY****";
         	  	cout<<"THANKU FOR VISIT AGAIN";
         	  	
         	 	goto sourav;
         	  	break;
         	   case 4:
         	   	
         	   	cout<<"Enter your moeny for credit:\t";
			   	cin>>withdraw;
			   	
			   	if(withdraw>balance)
			   	{
			   		system("cls");
			   		cout<<"\n\t\t\n****INVAILD BALANCE****";
			   		getch();
			   		goto sourav;
				}
				else
				{
					balance=balance-withdraw;
					system("cls");
			   		cout<<"\n\t\t****WITHDRAW SUCESSFULLY****";
         	  		cout<<"THANKU FOR VISIT AGAIN";
				}
			  	
         	 	goto sourav;
         	  	break;
         	case 5:
         		exit(0);
         		
         		default:
         			cout<<"**INVALID NUMBER AND PLS TRY AGAIN**";
         				
      }  
	   }
}; 

class library : public bank
{
	
};
int main()
{
	library l1;
	l1.bank_details()
  return(0);

}
