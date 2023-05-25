#include <iostream>

using namespace std;

// 클래스의 이름만으로 호출 가능한 함수

class Test
{
	int value;
	static int value2;

public:
	Test(){}
	void Temp1() { this->value; }
	void Temp1() const { this->value; }

	static void Temp2() { value2; } // static 변수만 사용 가능

	int t;
};

int Test::value2 = 0;

int main()
{
	Test t1;
	// Test::Temp1(); : 불가능
	t1.Temp1(); // O

	Test::Temp2(); // 가능

	void(*ptr1)() = Test::Temp2; // 함수포인터 지정도 가능

	// 멤버 변수 포인터
	int Test::* ptr2 = &Test::t;
	t1.*ptr2 = 10;

	// 멤버 함수 포인터
	void (Test:: * ptr3)() = &Test::Temp1;
	(t1.*ptr3)();

	return 0;
}