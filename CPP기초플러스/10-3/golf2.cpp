// golf.cpp  Golf 클래스의 함수 정의
#include <iostream>
#include "golf2.h"
using namespace std;

Golf::Golf() {
	strcpy_s(fullname, 20, "no name");		// null 자리
	handicap = 0;
}

// 매개변수로 주어진 값으로 Golf 구조체 생성
Golf::Golf(const char* name, int hc) {
	strcpy_s(fullname, 20, name);
	sethandicap(hc);
}

// 사용자에게서 입력받음. 이름이 입력되면 1반환, 입력되지 않으면 0반환
int Golf::setgolf(Golf& g) {
	cout << "풀네입을 입력하세요.: ";
	cin.get(g.fullname, Len);			// 풀네임을 최대 Len 길이만큼 입력받음.
	if (strcmp(g.fullname, "") == 0)	// strcmp은 두 인자가 같으면 0 반환
		return 0;

	cout << "핸디캡을 입력하세요: ";
	cin >> g.handicap;
	cin.clear();
	while (cin.get() != '\n')		// 버퍼가 비워져있으면 계속함
		continue;

	*this = Golf(g.fullname, g.handicap);		// *this라는 건 Golf 참조자 g의 값을 말함. 이걸 위에 Golf(const char* name, int hc) 함수로 값을 구해 대입하겠다.
	return 1;
}

void Golf::sethandicap(int hc) {
	this->handicap = hc;			// 이렇게 써도 되고, handicap = hc; 이렇게 써도 상관은 없음. this->handicap을 쓰는 이유는 매개변수로 같은 이름을 쓸때 구별하기 위해서 this를 사용하는 것임.
}

// 대화형으로 핸디캡을 입력받음
void Golf::updatehandicap() {
	int handi;
	cout << this->fullname << "의 핸디캡을 입력하세요: ";
	cin >> handi;
	handicap = handi;
	cin.clear();
	while (cin.get() != '\n')
		continue;
}

void Golf::showgolf() const {
	cout << "골퍼명: " << fullname << endl;
	cout << "핸디캡: " << handicap << endl;
}
