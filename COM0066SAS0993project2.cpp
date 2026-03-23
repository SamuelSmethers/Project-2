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
	
	while(valid == false) //run loop while the name is considered not accepted
	{
		for(int i=0; i<userName.length(); ++i)
		{
			if(isalnum(userName.at(i)) || isspace(userName.at(i))) 
			{
				valid=true; 
			}
			else //if its not a number an alphabetic character or a space it will do the else
			{
				cout<<"Username incorrect please re-enter: ";
				getline(cin, userName); 
				valid = false; //set acceptable to false to run while loop again since it might have been changed to true on a previous character
				break; //takes program out of for loop to the while loop which will run again starting character check at beginning of new string
			}		
		}
	}
	return valid;
}

string readValidName()
{
	string name;
	cout<<"Enter your name using letters, numbers, and spaces: " << endl;
	getline(cin,name);
	
	isValidName(name);
	
	
	return name;
}

int main()
{
	
	printHeader();
	
	readValidName();
	
	return 0;
}