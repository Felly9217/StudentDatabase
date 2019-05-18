#include<iostream>
#include"Add.h"

//constructor
Add::Add() {

}

//prompt the user
void Add::prompt() {
	num = getIdNum();
	do {
		cout << "First Name: ";
		getline(cin, fn);
		res = Validation::nameValid(fn);
	} while (!res);
	do {
		cout << "Last Name: ";
		getline(cin, ln);
		res = Validation::nameValid(ln);
	} while (!res);
	do {
		cout << "Major: ";
		getline(cin, major);
		res = Validation::majorValid(major);
	} while (!res);
}

//outfile student info
void Add::process() {
	fstream outFile("Info.txt", ios::app);

	if (!outFile)
		cout << "Cannot open Info.txt for output" << endl;

	outFile << left << setw(15) << num << setw(15) << fn << setw(15) << ln << major << endl;

	//display the inputs
	cout << "\n\n\n\n";
	cout << "\t\t" << left << setw(15) << "|ID" << "|" << setw(15) << "First Name" << "|" << setw(15) << "Last Name" << "|" << "Major" << endl;
	cout << "\t\t--------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t " << setw(15) << num << setw(16) << fn << setw(16) << ln << major << "\n\n\n\n\n\n\n\n\n\n";
	system("pause");

	outFile.close();
}