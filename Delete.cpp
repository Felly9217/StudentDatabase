#include<iostream>
#include"Delete.h"

//constructor
Delete::Delete() {

}

//process the deletion
void Delete::process() {
	//declarations
	string f;
	string l;
	string c;
	string i;
	int w;
	ifstream file;
	ofstream file2;

	file.open("Info.txt", ios::in);
	file2.open("temp.txt", ios::app);

	while (true) {
		w = 0;
		file >> i >> f >> l;
		getline(file, c);
		w = l.length();

		if (file.eof())
			break;

		if(i != id)
			file2 << left << setw(15) << i << setw(15) << f << setw(w) << l << c << endl;
	}

	file.close();
	file2.close();
	remove("Info.txt");
	rename("temp.txt", "Info.txt");
}