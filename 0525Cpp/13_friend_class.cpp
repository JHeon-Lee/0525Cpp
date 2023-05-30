#include <iostream>

using namespace std;

#pragma region friend global function
//class A
//{
//private:
//	int value = 1;
//
//	friend void doSomething(const A& a);
//};
//
//void doSomething(const A& a)
//{
//	cout << a.value << endl;
//	// ������ ��� �Ұ��������� class A �ȿ� 11�� ���� ������ ��� ����
//	// Ŭ���� ���ο� �����ص� �������
//	// friend �� ������ �����Լ��� �����
//  // friend�� ������ �Լ��� Ŭ���������� ���� ���� �������� ������ �ȹ���
//}
//
//int main()
//{
//	A a;
//	doSomething(a);
//
//	return 0;
//}

#pragma endregion

#pragma region friend member class

//class B; // ���漱�� ���Ѿ���
//
//class A
//{
//public:
//	void attack(B& b); // Ŭ���� B�� ����� ����ϰ� ������
//};
//
//class B
//{
//	int hp = 100;
//
//	friend void A::attack(B& b); 
//};
//
//void A::attack(B& b) // ���� ���Ǻθ� ��������
//{
//	cout << "b�� ü�� : " << b.hp << endl;
//
//	cout << "����!" << endl;
//	b.hp -= 10;
//	
//	cout << "b�� ü�� : " << b.hp << endl;
//}
//
//int main()
//{
//	A a;
//	B b;
//
//	a.attack(b);
//
//	return 0;
//}

#pragma endregion

#pragma region friend class

// Ư�� ��� ����, �Լ��� �ƴ� ��� ����ϰ� ���� ��

class A
{
public:
	void PrintBValue1(class B& b);
	void PrintBValue2(class B& b);
};

class B
{
	friend class A; // Ŭ���� A ���� ���� ��� ����

private:
	int value1 = 10;
	int value2 = 20;
};

void A::PrintBValue1(B& b)
{
	cout << "value1 : " << b.value1 << endl;
}

void A::PrintBValue2(B& b)
{
	cout << "value2 : " << b.value2 << endl;
}

int main()
{
	A a;
	B b;

	a.PrintBValue1(b);
	a.PrintBValue2(b);

	return 0;
}

// friend�� �ʹ� ���� ������ ������ �� ����

#pragma endregion