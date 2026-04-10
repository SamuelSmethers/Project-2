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
/*
bool isValidPin(const string&  p)
{
	return ;//add variable
}

bool setOrChangePin(string& oin, bool& pinSet)
{
	return ;//add variable
}

bool requirePinForAction(string& pin, bool& pinSet)
{
	return ;//add variable
}

*/

int main()
{
	string name;
	printHeader();
	
	name = readValidName();
	cout<< "Welcome " << name << "." << endl;
	cout<<endl;

	int menuSelection;
	enum menuOptions{Deposit=1,Withdraw=2,ShowAccount=3,Set_ChangePIN=4, EXIT=5,ViewTransaction=6};

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

			break;
		case EXIT:

			break;
		case ViewTransaction:

			break;
		default:
		;

	}

	return 0;
}