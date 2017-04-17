#include "JSONObject.h"
#include "Value.h"



JSONObject::JSONObject()
{
}


JSONObject::~JSONObject()
{
}

Value & JSONObject::operator[](const string & key)
{
	return obj_map[key];
}

string JSONObject::toJson()
{
	string jsonstr = "{";
	for (auto i = obj_map.begin(); i != obj_map.end(); ++i) {
		if (i != obj_map.begin()) {
			jsonstr += ", ";
		}
		jsonstr += "\"" + i->first + "\":" + i->second.toJson();
		//jsonstr += "\"" + i->first + "\":";
	}
	jsonstr += "}";
	return jsonstr;
}

