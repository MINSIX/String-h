#include"String.h";
#include<iostream>
#include<string>
using namespace std;
int main() {

	String str("Hello world!");
	str.print();
	cout << str.size()<<endl;
	cout << str.length()<<endl;
	cout<<str.capacity()<<endl;
}