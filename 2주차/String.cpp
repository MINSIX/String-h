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
const char* String::print(bool show=true) {
	
	if (show) {
		cout << this->str_ << endl;
		return this->str_;
	}
	else
		return this->str_;
}
int String::size() {
	return this->size_;
}
int String::length() {
	return this->size_;
}

int String::capacity() {
	
	return this->size_+1;
}
String& String::assign(const String& str) {

	this->size_ = strlen(str.str_);
	this->str_ = new char[this->size_ + 1];
	strcpy_s(this->str_, this->size_ + 1, str.str_);
	return (*this);

}

String& String::assign(const char* s) {
	this->size_ = strlen(s);
	this->str_ = new char[this->size_ + 1];
	strcpy_s(this->str_, this->size_ + 1, s);
	return (*this);
}


String& String::operator=(const String& str) {
	return this->assign(str.str_);
	
}

String& String::operator=(const char * s) {
	return this->assign(s);

}
String& String::append(const String& str) {

	int i = strlen(str.str_) + this->size_;
	char* str1 = new char[i + 1];
	strcpy_s(str1, i + 1, this->str_);
	strcat_s(str1, i + 1, str.str_);
	this->size_ = strlen(str.str_) + this->size_;
	this->str_ = new char[this->size_ + 1];
	strcpy_s(this->str_, this->size_ + 1, str1);

	return (*this);
}

String& String::append (const char* s) {
	int i = strlen(s) + this->size_;
	char *str1= new char[i+1];
	strcpy_s(str1,i+1, this->str_);
	strcat_s(str1, i + 1, s);
	this->size_ = strlen(s) + this->size_;
	this->str_ = new char[this->size_ + 1];
	strcpy_s(this->str_, this->size_ + 1, str1);

	return (*this);
}

String& String::operator+=(const String& str) {

	 return this->append(str.str_);
}

String& String::operator+=(const char* s) {
	return this->append(s);

}

char& String:: operator[](int index) {
	if (index < 0)
		index = 0;

	if (index > strlen(this->str_))
		return this->str_[index - 1];

	return this->str_[index];
}

void String::shrink_to_fit() {
	if (this->size_ + 1 < capacity())
		this->size_ = strlen(this->str_);
}

