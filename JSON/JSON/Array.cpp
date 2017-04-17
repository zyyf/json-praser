#include "Array.h"
#include "Value.h"



Array::Array()
{
}


Array::~Array()
{
}

Value & Array::operator[](int index)
{
	return vec[index];
}

void Array::pushBack(const Value & val)
{
	vec.push_back(val);
}

string Array::toJson()
{
	string arrayStr = "[";
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		if (i != vec.begin()) {
			arrayStr += ", ";
		}
		arrayStr += i->toJson();
	}
	arrayStr += "]";
	return arrayStr;
}
