#pragma once
#include <string>
#include <exception>
using namespace std;

class ExpDesp: public exception
{
public:
	const char* what() const throw();
};


