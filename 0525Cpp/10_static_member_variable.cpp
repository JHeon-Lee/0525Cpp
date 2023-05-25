#include <iostream>

using namespace std;

// static member varialbe : 클래스의 모든 객체가 공유하는 변수

class Test
{
public:
	int value = 1;
	static int count; // static member variable은 클래스 내에서 초기화 불가능
};

int Test::count = 10; // 클래스 밖(cpp 파일, 헤더 파일 X)에서 초기화 해야함

int main()
{
	Test t1, t2;

	t1.value = 10;
	t2.value = 20;

	cout << &t1.value << ", " << t1.value << endl;
	cout << &t2.value << ", " << t2.value << endl; // 다른 주소, 다른 값 출력

	t1.count = 30;
	t2.count = 40;

	cout << &t1.count << ", " << t1.count << endl;
	cout << &t2.count << ", " << t2.count << endl;
	// static 변수는 모든 클래스 내에서 공유하기 때문에 주소, 마지막에 넣은 값까지 동일

	cout << &Test::count << ", " << Test::count << endl;
	//객체를 만들지 않아도 메모리가 잡힘

	return 0;
}