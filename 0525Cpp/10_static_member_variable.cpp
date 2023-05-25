#include <iostream>

using namespace std;

// static member varialbe : Ŭ������ ��� ��ü�� �����ϴ� ����

class Test
{
public:
	int value = 1;
	static int count; // static member variable�� Ŭ���� ������ �ʱ�ȭ �Ұ���
};

int Test::count = 10; // Ŭ���� ��(cpp ����, ��� ���� X)���� �ʱ�ȭ �ؾ���

int main()
{
	Test t1, t2;

	t1.value = 10;
	t2.value = 20;

	cout << &t1.value << ", " << t1.value << endl;
	cout << &t2.value << ", " << t2.value << endl; // �ٸ� �ּ�, �ٸ� �� ���

	t1.count = 30;
	t2.count = 40;

	cout << &t1.count << ", " << t1.count << endl;
	cout << &t2.count << ", " << t2.count << endl;
	// static ������ ��� Ŭ���� ������ �����ϱ� ������ �ּ�, �������� ���� ������ ����

	cout << &Test::count << ", " << Test::count << endl;
	//��ü�� ������ �ʾƵ� �޸𸮰� ����

	return 0;
}