#include <iostream>

using namespace std;

// 멤버함수로 쓰이는 const

class Data
{
	int value1;
	mutable int value2; // mutable : const 함수에서도 수정을 가능하게함

public:
	Data() : value1(0), value2(0) {}

	int& GetValue() { cout << "not const" << endl; return value1; }

	const int& GetValue() const { cout << "const" << endl; return value1; }
	// &는 참조와 동시에 수정도 가능하다는 의미이므로 값에도 const를 붙혀야함
	// 위 아래 오버로딩 가능

	// void SetValue(int value) const { this->value1 = value; }
	void SetValue(int value) const { this->value2 = value; } // 자료형에 const 붙여도 사용 가능
};

void Print(const Data& data) // 매개변수를 수정하는게 아니면 상수값으로 받아오는게 안전함
{
	data.GetValue();
}

int main()
{
	Data data1;
	const Data data2;

	data1.GetValue(); // 윗 함수 호출
	data2.GetValue(); // 아랫 함수 호출

	Print(data2);

	return 0;
}