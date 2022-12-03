#pragma once
#include<iostream>
class String{
public:
	String();
	String(const char* s);
	String(const String& str);
	~String();
	const char* print(bool show)const;

	int size();

	int length();
	int capacity();

	
private:
	char* str_;
	int len_;
	int capa_;


public:
	String& operator+=(const String& str);
	String& operator+=(const char* s);
	String& operator=(const String& str);
	String& operator=(const char* s);
	String& assign(const String& str);
	String& assign(const char* s);
	String& append(const String& str);
	String& append(const char* s);
private:


	void ov(const char* s1, bool delStorage=false,const char* s2="");

	char& operator[](int index);
	void shrink_to_fit();

public:
	String operator+(const String& str);
	String operator+(const char* s);
}; 
std::istream& operator>>(std::istream& is,  String& str);
std::ostream& operator<<(std::ostream& os, const String& str);