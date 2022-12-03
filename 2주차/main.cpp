#include"String.h";
#include<iostream>
#include<string>
using namespace std;
int main() {

	String str("Hello world!");
	str.print(true);
	cout << str.size()<<endl;
	cout << str.length()<<endl;
	cout<<str.capacity()<<endl;

	String str2("Hellasdjflsafdjk");
	str += str2;
	
	str.print(true);
	cout << str.size() << endl;
	cout << str.length() << endl;
	cout << str.capacity() << endl;
	str = str2;

	str.print(true);
	cout << str.size() << endl;
	cout << str.length() << endl;
	cout << str.capacity() << endl;
	
}