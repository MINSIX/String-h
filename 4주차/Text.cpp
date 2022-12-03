#include<iostream>
#include"Text.h"
using namespace std;

//text class만들기
/*String 을 상속받아 만들기
* 내부 구조는 완벽하게 동일하다
* 기존의 String문자열에 멀티라인 개념을 추가한다
* 라인수가 몇개인가?
* 마지막에 한줄 끼워넣기
* 빈 문자열을 가질 수 있음
* 안비어 있으면 적어도 \n으로 구분되는 한줄을 가진다.
*

*/
void Text::ov1() {
	if ((int)strlen(this->str_) > 0 &&
		this->str_[(int)strlen(this->str_) - 1] != '\n') {
		this->String::append("\n");
	
	}
		}

Text::Text() :String("") {
	this->ov1();
	
}
Text::Text(const char* s) :String(s) {
	this->ov1();

}	//1번째로

Text::Text(const String& str) :String(str) {
	this->ov1();

}//어려움
Text::Text(const Text& txt) :String(txt) {
	this->ov1();
}
Text::~Text() {

}


Text& Text::append(const char* s) {
	return this->append(Text(s));
}

Text& Text::append(const String& str) {

	return this->append(Text(str));
}
Text& Text::append(const Text& txt) {
	this->String::append(txt);
	return *this;
} //String.append 호출 1줄, return *this 1줄

std::ostream& operator<<(std::ostream& out, Text& txt) {
	String tx = (String)txt;
	return out << tx.print(false) << endl;;
}


int Text::lines() {
	int a = strlen(this->str_);
	int count = 0;
	for (int b = 0; b < a; b++) {
		if (this->str_[b] == '\n')
			count++;

	}
	return count;

}