#ifndef STUDENTDATABASE_H
#define STUDENTDATABASE_H

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include"Validation.h"

using namespace std;

class StudentDatabase : public Validation
{
protected:
	string fn;
	string ln;
	string major;
	string id;
	int num;

public:
	StudentDatabase();
	virtual void prompt();
	virtual void process() = 0;
};

#endif