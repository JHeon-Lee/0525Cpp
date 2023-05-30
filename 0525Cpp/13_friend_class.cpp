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
//	// 원래는 사용 불가능하지만 class A 안에 11번 줄을 적으면 사용 가능
//	// 클래스 내부에 구현해도 상관없음
//	// friend 로 지정시 전역함수로 취급함
//  // friend를 선언한 함수느 클래스에서는 접근 제어 지시자의 영향을 안받음
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

//class B; // 전방선언 시켜야함
//
//class A
//{
//public:
//	void attack(B& b); // 클래스 B의 멤버를 사용하고 싶을때
//};
//
//class B
//{
//	int hp = 100;
//
//	friend void A::attack(B& b); 
//};
//
//void A::attack(B& b) // 따로 정의부를 만들어야함
//{
//	cout << "b의 체력 : " << b.hp << endl;
//
//	cout << "공격!" << endl;
//	b.hp -= 10;
//	
//	cout << "b의 체력 : " << b.hp << endl;
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

// 특정 멤버 변수, 함수가 아닌 모두 사용하고 싶을 때

class A
{
public:
	void PrintBValue1(class B& b);
	void PrintBValue2(class B& b);
};

class B
{
	friend class A; // 클래스 A 에서 전부 사용 가능

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

// friend로 너무 많이 엮으면 위험할 수 있음

#pragma endregion