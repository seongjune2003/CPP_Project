// pe9-1.cpp	(main 파일은 주문서라고 생각하면 쉬움.)
// 골프문제. 회원의 풀네임과 핸디캡을 저장하는 구조체를 만들고 해당 구조체에 이름을 저장하는 함수, 핸디캡 점수를 저장하는 함수를 각각 만드시오. 
// + 인자로 주어진 이름, 핸디캡으로 저장하는 함수, 구조체의 내용을 보며주는 함수

#include <iostream>
#include "golf.h"		// 헤더파일 포함. 헤더파일을 포함하면서 golf.cpp에도 연결이 된다.

const int Members = 5;
int main(void) {			// int main()은 여러 매개변수를 사용하여 호출할 수 있지만, int main(void)는 매개변수 없이만 호출이 가능함
	using namespace std;
	golf team[Members];

	cout << Members << "명의 골프회원.\n";
	int i = 0;
	for (int i = 0; i < Members; i++)
		if (setgolf(team[i]) == 0)			// 이름 입력이 제대로 되지 않으면 for문 빠져나감
			break;
	for (int j = 0; j < Members; j++)		// ** 이게 출력이 안되네? // 되네? 왜 됐다 안됐다하지?
		showgolf(team[j]);

	setgolf(team[0], "Lee", 5);
	showgolf(team[0]);
	handicap(team[0], 3);
	showgolf(team[0]);

	return 0;
}

