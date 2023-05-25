#include <iostream>

/*	��ü���� ���� ��Ģ
	SOLID

	1. ���� å�� ��Ģ(Single Respoinsibility principle)
	2. ����-��� ��Ģ(Open Closed Principle)
	3. �������� ġȯ ��Ģ(Liskov Substitution Principle)
	4. �������̽� �и� ��Ģ(Interface Segregation Principle)
	5. ���� ���� ��Ģ(Dependency Inverson Principle)
	- ����
*/

/*
	������ ���� - ���Ӹ��鶧 ��� �������� ������ ���θ� ����

	- singleton pattern : ��������Ģ�� ��߳�
*/

using namespace std;

class Audio
{
public:
	static Audio& GetInstance()
	{
		static Audio audio;
		return audio;
	}

	void OutSound(string music)
	{
		cout << "�Ҹ� ��� : " << music << endl;
	}
	
private:
	Audio(){}
	Audio(const Audio& audio) = delete; // delete or private �ϳ� ����
	Audio& operator=(const Audio& audio) = delete;
};

int main()
{
	string bgm("����");
	Audio::GetInstance().OutSound(bgm);

	return 0;
}