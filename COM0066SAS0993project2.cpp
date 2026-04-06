#include <iostream>
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
		cout<<"Name can only contain letters, digits, and spaces. Try again:";
		getline(cin, name);
	}
	
	return name;
}

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



int main()
{
	string name;
	printHeader();
	
	name = readValidName();
	cout<< "Welcome " << name << "." << endl;
	
	return 0;
}