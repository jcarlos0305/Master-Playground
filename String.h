#pragma once
#include <iostream>

using namespace std;

class String {
public:
	String();
	String(const char* string);
	~String();

	char* value = nullptr;


	int length() const;
	void clear();

	String GetMeAString();

private:
	void setValueSize(int size);
};

