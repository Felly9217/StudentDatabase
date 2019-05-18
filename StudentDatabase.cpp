#include<iostream>
#include<string>
#include"StudentDatabase.h"

//constructor
StudentDatabase::StudentDatabase() {
	fn = "";
	ln = "";
	major = "";
	id = "";
	num = 0;
}

void StudentDatabase::prompt() {
	cout << "ID Number: ";
	getline(cin, id);
}