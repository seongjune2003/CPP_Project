// 이전에 골프 문제의 연속. 풀네임과 핸디캡을 입력받는 클래스를 작성하시오. this 포인터를 적극 활용하세요.
// 필요한거 - 디폴트 생성자, (매개변수로 받는)생성자, 대화형으로 받는 생성 함수(재귀), 핸디캡 업데이트 함수, show함수
#include <iostream>
using namespace std;
#include "golf2.h"

const int Arsize = 5;		// 뒤에 배열만들때 쓸 사이즈

int main() {
	Golf me = Golf();
	me.showgolf();

	Golf ann = Golf("Ann Birdfree", 24);
	ann.showgolf();

	Golf andy, temp;
	andy.setgolf(temp);
	andy.showgolf();
	andy.updatehandicap();
	andy.showgolf();

	Golf golfers[Arsize];
	int i, j;

	for (i = 0; i < Arsize && golfers[i].setgolf(temp); i++);		// golfers[i].setgolf(temp)한게 1을 반환할때 (True일때)
	for (j = 0; j < i; j++) {
		cout << "Golfer #" << j + 1 << endl;
		golfers[i].showgolf();
	}

	return 0;
}