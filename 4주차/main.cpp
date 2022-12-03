#include"String.h";
#include"Text.h"
#include<iostream>

using namespace std;
void Stringtext() {
	String str("Hello wold!");
	str.print(true);
	cout << str.size() << endl;
	cout << str.length() << endl;
	cout << str.capacity() << endl;
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
void Texttest() {
	String str3("hihi\n\nhi");
	Text t1("");
	Text t2("apple");
	Text t3(str3);
	Text t4(t2);
	str3.append("\n");
	cout << str3;
	cout << "{" << t1.print(false) << "}" << endl;
	cout << "{" << t2.print(false) << "}" << endl;
	cout << "{" << t3.print(false) << "}" << endl;
	cout << "{" << t4.print(false) << "}" << endl;


	int a = t2.lines();
	cout << "t2의 줄개수 = " << a << endl;
	cout << t3;

	Text t6("I\nam\na\nmusic\nman\n");
	cout << t6 << endl;
	cout << t6.lines() << endl;
	t1.append("i\nam\na\nmin\nsik\n");
	cout << t1;
}
int main() {



	
	Texttest();

}