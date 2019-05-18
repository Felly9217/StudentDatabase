#include<iostream>
#include"Search.h"

//constructor
Search::Search() {

}

//processing the search
void Search::process() {
	//declarations
	string i = "";
	string f = "";
	string l = "";
	string m = "";

	fstream inFile("Info.txt", ios::in);

	//check if the file is there
	if (!inFile)
		cout << "Cannot open Info.txt for input" << endl;

	while (true) {
		inFile >> i >> f >> l;		//read file in
		getline(inFile, m);

		//break if id not found
		if (inFile.eof()) {
			cout << "The name you entered does not match our records." << endl;
			break;
		}

		//compare the id
		if (i == id) {
			cout << "\n\n\n\n";
			cout << "\t\t" << left << setw(15) << "|ID" << "|" << setw(15) << "First Name" << "|" << setw(20) << "Last Name" << "|" << "Major" << endl;
			cout << "\t\t--------------------------------------------------------------------------------------------" << endl;
			cout << "\t\t " << setw(16) << i << setw(15) << f << setw(10) << l << m << "\n\n\n\n\n\n\n\n\n\n";
			system("pause");
			break;
		}
	}

	inFile.close();
}