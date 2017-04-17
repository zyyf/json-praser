#pragma once
#include <map>
#include <string>


using namespace std;
class Value;
class JSONObject
{
	map<string, Value> obj_map;
public:
	JSONObject();
	~JSONObject();
	Value &operator[](const string &key);
	const int size();
	string toJson();
};

