#include<iostream>
#include<fstream>
#include<string>
#include"StudentDatabase.h"
#include"Add.h"
#include"Search.h"
#include"Delete.h"
#include"Modify.h"

using namespace std;

int main()
{
	//declarations
	string tempChoice;
	char choice;
	string repeat;
	StudentDatabase *student = NULL;

	while(true) {
		//get input from the user
		do {
			cout << "\t\t====== STUDENT DATABASE MANAGEMENT SYSTEM ======";
			cout << "\n\n                                          ";
			cout << "\n\n";
			cout << "\n \t\t\t 1. Add    Records";
			cout << "\n \t\t\t 2. Search   Records";
			cout << "\n \t\t\t 3. Modify Records";
			cout << "\n \t\t\t 4. Delete Records";
			cout << "\n \t\t\t 5. Exit   Program";
			cout << "\n\n";
			cout << "\t\t\t Select Your Choice :=> ";
			getline(cin, tempChoice);
			choice = tempChoice[0];

			//validate the choice
			if (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5') {
				system("cls");
				cout << "\t\t\t Please pick number between 1 and 5 \n" << endl;
			}

		} while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');

		switch (choice)
		{
		case '1':
			student = new Add();
			break;
		case '2':
			student = new Search();
			break;
		case '3':
			student = new Modify();
			break;
		case '4':
			student = new Delete();
			break;
		case '5':
			cout << "\n\n";
			cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE";
			cout << "\n\n";
			return 0;
		}

		//prompt and processing the info
		student->prompt();
		system("cls");
		student->process();

		//clear and clean
		system("cls");
	}

}