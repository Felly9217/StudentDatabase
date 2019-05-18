#include<iostream>
#include<ctime>
#include"Validation.h"

//constructor
Validation::Validation() {
	res = false;
}

//validate the id
bool Validation::idValid(string id) {
	for (int i = 0; i < (int)id.length(); i++)
		if (isdigit(id[i]) == 0)
			return false;

	return true;
}

//validate the names
bool Validation::nameValid(string name) {
	for (int i = 0; i < (int)name.length(); i++) {
		if (isalpha(name[i]) == 0)
			return false;
	}

	return true;
}


//validate the major
bool Validation::majorValid(string major) {
	for (int i = 0; i < (int)major.length(); i++) {
		if (isalpha(major[i]) == 0) {
			if(isspace(major[i]) == 0)
				return false;
		}
	}

	return true;
}

//check for dup and store the id
int Validation::getIdNum() {
	//declarations
	int num = 0;
	int i;
	fstream file;

	file.open("ID.txt", ios::in);

	//reads in the file until end and add 1 to the biggest number
	while(true){
		file >> i;

		//check to see if theres anything in the file
		if (i <= 0) {
			num = 1;
			break;
		}

		if (file.eof()) {
			num = i + 1;
			break;
		}

	}

	file.close();

	//store the id
	file.open("ID.txt", ios::app);
	file << num << endl;
	file.close();
	return num;

}