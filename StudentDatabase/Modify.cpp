#include<iostream>
#include"Modify.h"

//constructor
Modify::Modify() {

}

//processing the modification
void Modify::process() {
	//declarations
	string f;
	string l;
	string m;
	string i;
	int w;
	ifstream file;
	ofstream file2;

	file.open("Info.txt", ios::in);
	file2.open("temp.txt", ios::app);
	
	while (true) {
		w = 0;
		file >> i >> f >> l;
		getline(file, m);
		w = l.length();

		if (file.eof())
			break;

		if (i != id)
			file2 << left << setw(15) << i << setw(15) << f << setw(w) << l << m << endl;

		if (i == id) {
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

			file2 << left << setw(15) << id << setw(15) << fn << setw(15) << ln << setw(15) << major << endl;
		}


	}

	file.close();
	file2.close();
	remove("Info.txt");
	rename("temp.txt", "Info.txt");
}