#pragma once
#include <vector>

using namespace std;

class Value;
class Array
{
	vector <Value> vec;
public:
	Array();
	~Array();
	Value &operator[](int index);
	void pushBack(const Value & val);
	string toJson();
};

