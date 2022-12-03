#include<iostream>
#include"String.h"
using namespace std;

String::String() {
	this->ov("");
}
String::String(const char* s) {
	this->ov(s);

}

String::String(const String& str) {
	this->ov(str.str_);
}

void String::ov(const char* s1, bool delStorage, const char* s2) {
	int len = (int)strlen(s1)+(int)strlen(s2);
	int capa = len + 1;
	char* buf = new char[capa];
	strcpy_s(buf, capa, s1);
	strcat_s(buf, capa, s2);
	if (delStorage)
		delete[] this->str_;
	this->len_ = len;
	this->capa_ = capa;
	this->str_ = buf;
}

String::~String() {
	delete[] this->str_;

}
const char* String::print(bool show) const{

	if (show==true) {
		cout << this->str_<< endl;
		
	}
	return this->str_;

}
int String::size() {
	return strlen(this->str_);
}
int String::length() {
	return this->size();
}

int String::capacity() {

	return this->capa_;
}
String& String::assign(const String& str) {


	return 	this->assign(str.str_);

}

String& String::assign(const char* s) {

	this->ov(s, true);
	return *this;
	
}


String& String::operator=(const String& str) {
	
		return this->assign(str.str_);
}

String& String::operator=(const char * s) {
	
	return this->assign(s);

}
String& String::append(const String& str) {
	return this->append(str.str_);
}

String& String::append (const char* s) {
	
	/*
	int i = strlen(s) + this->len_;
	char* str1 = new char[i + 1];


	strcpy_s(str1, i + 1, this->str_);
	strcat_s(str1, i + 1, s);

	this->len_ = strlen(s)+this->len_;
	this->str_ = new char[this->capa_];

	strcpy_s(this->str_, this->capa_, str1);
	*/
	this->ov(this->str_, true, s);
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
		index=strlen(this->str_)-1;

	return this->str_[index];
}

void String::shrink_to_fit() {
	this->assign(String(*this));
}

String String:: operator+(const String& str){

	return this->operator+(str.str_);

}
String String:: operator+(const char* s){
	/*int i = strlen(s) + this->len_;
	char* str1 = new char[i + 1];
	strcpy_s(str1, i + 1, this->str_);
	strcat_s(str1, i + 1, s);
	this->len_ = strlen(s) + this->len_;
	this->str_ = new char[this->capa_];
	strcpy_s(this->str_, this->capa_, str1);*/

	return String(*this).append(s);
}

std::ostream& operator<<(ostream& os, const String& str){
	

	return os << str.print(false) << endl;;
	

}
std::istream& operator>>(istream& is,  String& str){
	
	char buf[1024];
	is >> buf;
	str.assign(buf);
	return is;
}