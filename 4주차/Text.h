#include "String.h"

class Text : public String
{
public:
	Text();
	Text(const char* s);	//1��°��
	Text(const String& str);//�����
	Text(const Text& txt);
	~Text();
	int lines();

	
	Text& append(const Text& txt); //String.append ȣ�� 1��, return *this 1��
	Text& append(const char* s);
	Text& append(const String& str);
	void ov1();
};
// �ݺ������� �������� 2��°�ξ����
std::ostream& operator<<(std::ostream& out, Text& txt);
//�ִ��� ���� �غ� ��

