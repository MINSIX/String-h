#pragma once
class String{
public:
	String();
	String(const char* s);
	String(const String& str);
	~String();

	void print();
	int size();
	int length();
	int capacity();
private:
	char* str_;
	int size_;


public:

private:


};