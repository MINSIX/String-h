#pragma once
class String{
public:
	String();
	String(const char* s);
	String(const String& str);
	~String();

	const char* print(bool show);

	int size();
	int length();
	int capacity();
private:
	char* str_;
	int size_;


public:
	String& operator+=(const String& str);
	String& operator+=(const char* s);
	String& operator=(const String& str);
	String& operator=(const char* s);
private:

	String& assign(const String& str);
	String& assign(const char* s);


	String& append(const String& str);
	String& append(const char* s);
	

	char& operator[](int index);
	void shrink_to_fit();
};