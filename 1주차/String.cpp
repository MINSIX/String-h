#include<iostream>
#include"String.h"
using namespace std;
String::String() {
	this->str_ = NULL;
}
String::String(const char* s) {
	this->size_ = strlen(s);
	this->str_ = new char[this->size_ + 1];
	strcpy_s(this->str_,this->size_+1, s);
}

String::String(const String& str) {
	this->size_ = strlen(str.str_);
	this->str_ = new char[this->size_ + 1];
	strcpy_s(this->str_, this->size_ + 1, str.str_);
}
String::~String() {
	delete[] this->str_;

}
void String::print() {
	cout << this->str_ << endl;
}
int String::size() {
	return strlen(this->str_);
}
int String::length() {
	return strlen(this->str_);
}

int String::capacity() {
	int i = 1;
	while (i < strlen(this->str_))
		i *= 2;
	return i-1;
}