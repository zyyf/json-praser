#include <iostream>
#include "JSONObject.h"
#include "Value.h"


void main() {
	JSONObject obj;
	
	obj["title"] = "Thinking in C++";
	obj["authors"] = Array();
	obj["authors"].pushBack("Bruce Eckel");
	obj["authors"].pushBack("Chuck Allison");
	obj["price"] = 288.2;
	obj["pub_info"] = JSONObject();
	obj["pub_info"]["name"] = "China Machine Press";
	cout << obj.toJson() << endl;
	

}


