#include "String.h"

String::String() {

}

String::String(const char* string) {
	cout << string[0] << endl;
	for (char* p = value; (*p = *string) != '\0'; ++p, ++string);
}

String::~String() {

}

int String::length() const {
	return 0;
}

void String::clear() {

}

String String::GetMeAString() {
	return String();
}

void String::setValueSize(int size) {
	value = new char(size);
}
