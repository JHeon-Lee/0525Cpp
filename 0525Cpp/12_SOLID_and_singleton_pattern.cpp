#include <iostream>

/*	객체지향 설계 원칙
	SOLID

	1. 단일 책임 원칙(Single Respoinsibility principle)
	2. 개방-폐쇄 원칙(Open Closed Principle)
	3. 리스코프 치환 원칙(Liskov Substitution Principle)
	4. 인터페이스 분리 원칙(Interface Segregation Principle)
	5. 의존 역전 원칙(Dependency Inverson Principle)
	- 면접
*/

/*
	디자인 패턴 - 게임만들때 어느 형식으로 만들지 봐두면 편함

	- singleton pattern : 개방폐쇄원칙에 어긋남
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
		cout << "소리 출력 : " << music << endl;
	}
	
private:
	Audio(){}
	Audio(const Audio& audio) = delete; // delete or private 하나 택일
	Audio& operator=(const Audio& audio) = delete;
};

int main()
{
	string bgm("던전");
	Audio::GetInstance().OutSound(bgm);

	return 0;
}