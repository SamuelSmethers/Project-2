#include <iostream>
#include <cstring>
using namespace std;

void printHeader()
{
	cout << "+-----------------------------------------------------+"<< endl;
    cout<< "|\t     Computer Science and Engineering \t      |" << endl;
    cout<< "|\t      CSCE 1030 - Computer Science I \t      |"<< endl;
    cout<< "|  Samuel,Smethers-SAS0993-SamuelSmethers@my.unt.edu  |" << endl;
    cout<< "| Cristian,Mireles-COM0066-CristianMireles@my.unt.edu |" << endl;
    cout << "+-----------------------------------------------------+"<< endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;	
}

bool isValidName(const string& name)
{
	bool valid=false;
	
		for(int i=0; i<name.length(); ++i)
		{
			if(isalnum(name.at(i)) || isspace(name.at(i))) 
			{
				valid=true; 
			}
			else //if its not a number an alphabetic character or a space it will do the else
			{
				valid = false; //set acceptable to false
				break; //takes program out of for loop 
			}		
		}

	return valid;
}

string readValidName()
{
	string name;
	cout<<"Enter your name using letters, numbers, and spaces: " << endl;
	getline(cin,name);
	
	while(isValidName(name)==false)
	{
		cout<<"Name can only contain letters, digits, and spaces. Try again:"<<endl;
		getline(cin, name);
		
	}
	
	return name;
}

bool isValidPin(const string&  p)
{
	bool validPin;
		if(p.length() > 3 && p.length() < 7)
		{
			for(int i = 0; i < 6; i++)
			{
				if(isdigit(p.at(i)))
				{
					validPin = true;
				}
				else
				{
					validPin = false;
					break;
				}
			}
		}
		else 
		{
			cout << "Invalid PIN: Try again"<<endl;
			validPin=false;
		}

	return validPin;
}

bool setOrChangePin(string& pin, bool& pinSet)
{
	bool validPIN=false;
	string tempPIN;
	bool confirm=false;
	do
	{
		cout << "Set PIN(4-6 digits): " ;
		getline(cin, pin);
	}while(isValidPin(pin)==false);
	
	while(confirm==false)
	{
		cout<<"Confirm PIN: ";
		getline(cin, tempPIN);
		if(tempPIN==pin)
		{
			confirm=true;
			pinSet=true;
			cout<<"Pin Set"<<endl;
		}
		else
		{
			cout<<"Doesn't Match. Try again."<<endl;
		}
	}

	return pinSet;
}
/*
bool requirePinForAction(string& pin, bool& pinSet)
{
	return ;//add variable
}

*/

int main()
{
	string pin; 
	bool pinSet;
	double balance;
	string name;
	printHeader();
	bool exit=false;
	string AccountChosen;
	name = readValidName();
	cout<<"Enter initial balance:";
	cin>>balance;
	cout<<endl;

	int accountTypeSelection;
	enum AccountType{Checking=1,Savings=2,Student=3};

	cout<<"Chose account type:"<<endl;
	cout<<"1) Checking"<<endl;
	cout<<"2) Savings"<<endl;
	cout<<"3) Student"<<endl;
	do{
		cout<<"Enter 1-3:";
		cin>>accountTypeSelection;
		cout<<endl;
	}while(!(accountTypeSelection>0 && accountTypeSelection<4));
	
	switch(accountTypeSelection)
	{
		case Checking:
			AccountChosen = "Checking";
			break;
		case Savings:
			AccountChosen = "Savings";
			break;
		case Student:
			AccountChosen = "Student";
			break;
		default:
		break;
	}
	cout << "+-----------------------------------------------------+"<< endl;
	cout<< "Account holder: " << name << endl;
	cout<<"Account Type: " << AccountChosen <<endl;
	cout<<"Balance: "<<balance<<endl;
	


	int menuSelection;
	enum menuOptions{Deposit=1,Withdraw=2,ShowAccount=3,Set_ChangePIN=4, EXIT=5,ViewTransaction=6};
do{
	cout << "+-----------------------------------------------------+"<< endl;
	cout<<"1) Deposit (PIN Required)"<<endl;
	cout<<"2) Withdraw (PIN Required)"<<endl;
	cout<<"3) Show Account Detials"<<endl;
	cout<<"4) Set/Change PIN (4-6 Digits)"<<endl;
	cout<<"5) EXIT"<<endl;
	cout<<"6) View Transaction by type"<<endl;
	cout << "+-----------------------------------------------------+"<< endl;

	do
	{
		cout<<"Select an option 1-6:";
	 	cin>>menuSelection;
		cout<<endl;
	} while (!(menuSelection>0) && (menuSelection<6));

	switch(menuSelection)
	{
		case Deposit:

			break;
		case Withdraw:

			break;
		case ShowAccount:

			break;
		case Set_ChangePIN:
			setOrChangePin(pin,pinSet);
			break;
		case EXIT:
			char tempExit;
			cout<<"Are you sure you want to exit y/n:";
			cin>>tempExit;
			if(tempExit=='y' || tempExit=='Y')
			{
				exit=true;
			}
			break;
		case ViewTransaction:

			break;
		default:
		;

	}

}while(exit==false);



	return 0;
}