#include <iostream>

using namespace std;

// ����Լ��� ���̴� const

class Data
{
	int value1;
	mutable int value2; // mutable : const �Լ������� ������ �����ϰ���

public:
	Data() : value1(0), value2(0) {}

	int& GetValue() { cout << "not const" << endl; return value1; }

	const int& GetValue() const { cout << "const" << endl; return value1; }
	// &�� ������ ���ÿ� ������ �����ϴٴ� �ǹ��̹Ƿ� ������ const�� ��������
	// �� �Ʒ� �����ε� ����

	// void SetValue(int value) const { this->value1 = value; }
	void SetValue(int value) const { this->value2 = value; } // �ڷ����� const �ٿ��� ��� ����
};

void Print(const Data& data) // �Ű������� �����ϴ°� �ƴϸ� ��������� �޾ƿ��°� ������
{
	data.GetValue();
}

int main()
{
	Data data1;
	const Data data2;

	data1.GetValue(); // �� �Լ� ȣ��
	data2.GetValue(); // �Ʒ� �Լ� ȣ��

	Print(data2);

	return 0;
}