#include<iostream>
#include"Text.h"
using namespace std;

//text class�����
/*String �� ��ӹ޾� �����
* ���� ������ �Ϻ��ϰ� �����ϴ�
* ������ String���ڿ��� ��Ƽ���� ������ �߰��Ѵ�
* ���μ��� ��ΰ�?
* �������� ���� �����ֱ�
* �� ���ڿ��� ���� �� ����
* �Ⱥ�� ������ ��� \n���� ���еǴ� ������ ������.
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

}	//1��°��

Text::Text(const String& str) :String(str) {
	this->ov1();

}//�����
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
} //String.append ȣ�� 1��, return *this 1��

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