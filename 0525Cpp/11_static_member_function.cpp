#include <iostream>

using namespace std;

// Ŭ������ �̸������� ȣ�� ������ �Լ�

class Test
{
	int value;
	static int value2;

public:
	Test(){}
	void Temp1() { this->value; }
	void Temp1() const { this->value; }

	static void Temp2() { value2; } // static ������ ��� ����

	int t;
};

int Test::value2 = 0;

int main()
{
	Test t1;
	// Test::Temp1(); : �Ұ���
	t1.Temp1(); // O

	Test::Temp2(); // ����

	void(*ptr1)() = Test::Temp2; // �Լ������� ������ ����

	// ��� ���� ������
	int Test::* ptr2 = &Test::t;
	t1.*ptr2 = 10;

	// ��� �Լ� ������
	void (Test:: * ptr3)() = &Test::Temp1;
	(t1.*ptr3)();

	return 0;
}