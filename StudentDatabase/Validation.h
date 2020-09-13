#ifndef VALIDATION_H
#define VALIDATION_H

#include<string>
#include<cctype>
#include<fstream>

using namespace std;

class Validation
{
protected:
	bool res;

public:
	Validation();
	bool idValid(string id);
	bool nameValid(string name);
	bool majorValid(string major);
	int getIdNum();
};

#endif