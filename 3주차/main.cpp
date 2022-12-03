#include"String.h";
#include<iostream>
#include<string>
using namespace std;
int main() {

	String str("Hello wold!");
	str.print(true);
	cout << str.size()<<endl;
	cout << str.length()<<endl;
	cout<<str.capacity()<<endl;
	str = str;
	String str2("1ellasdjflsafdjk");
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
	
	cout << endl;
	cout << str;
	str = str;
	str += str;
	str + str;

	cin >> str;
	cout << str;
	
}