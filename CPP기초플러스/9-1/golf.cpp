// golf.cpp   golf.h의 세부 내용 정의
#include <iostream>
#include <cstring>		// strcpy_s 사용
#include "golf.h"
using namespace std;

// 이름이 입력되면 1반환, 비어있으면 0반환
int setgolf(golf& g) {
	cout << "풀네임을 입력해주세요.: ";
	cin.getline(g.fullname, len);
	if (g.fullname[0] == '\0')					// 입력받은 이름의 첫글자가 비어있으면 0 반환. 아니면 핸디캡 입력 진행
		return 0;
	cout << g.fullname << "의 핸디캡을 입력하세요: ";
	while (!(cin >> g.handicap)) {				// 입력이 제대로 안됐으면. (숫자를 입력해야하는데 문자를 입력한 경우)
		cin.clear();							// 버퍼를 비워주고
		cout << "숫자만 입력해야 합니다. 다시 입력하세요: ";
	}
	while (cin.get() != '\n')		// 제대로 입력이 됐으면 위 과정 반복.
		continue;
	return 1;						// 안됐으면 1반환 (성공적으로 컴파일은 됐는데 뭔가 이상에 해당하는게 발생함
}

// 주어진 값으로 값 변경
void setgolf(golf& g, const char* name, int hc) {			// char*라는 거는 그 자체로 배열이기도 하고 char* name의 name은 생성된 배열의 첫문자를 가리킨다.
	strcpy_s(g.fullname, name);		// char[] 형식이라 ==로 비교할 수 없음. strcpy_s를 써야됨
	g.handicap = hc;
}

// 주어진 int값으로 핸디캡 변경
void handicap(golf& g, int hc) {
	g.handicap = hc;
}

// 정보를 보여줌
void showgolf(const golf& g) {
	cout << "이름: " << g.fullname << endl;
	cout << "handicap: " << g.handicap << endl << endl;
}
