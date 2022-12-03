#include "String.h"

class Text : public String
{
public:
	Text();
	Text(const char* s);	//1번째로
	Text(const String& str);//어려움
	Text(const Text& txt);
	~Text();
	int lines();

	
	Text& append(const Text& txt); //String.append 호출 1줄, return *this 1줄
	Text& append(const char* s);
	Text& append(const String& str);
	void ov1();
};
// 반복문으로 개수세기 2번째로어려움
std::ostream& operator<<(std::ostream& out, Text& txt);
//최대한 재사용 해볼 것

