#ifndef ADD_H
#define ADD_H

#include"StudentDatabase.h"

class Add : public StudentDatabase
{
public:
	Add();
	void prompt();
	void process();
};

#endif