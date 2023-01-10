// golf.h  헤더파일 (카탈로그의 이름만 뽑아놓은 거랑 비슷함. 이름에 대한 설명은 cpp파일에서)
#ifndef GOLF_H_
#define GOLF_H_

const int len = 40;
struct golf {
	char fullname[len];
	int handicap;
};

// 매개변수로 주어진 이름, 핸디캡으로 변경
void setgolf(golf& g, const char* name, int hc);

// 사용자한테서 입력받은 대로 정보를 변경함. 이름이 입력되면 1을, 입력되지 않으면 0을 반환함
int setgolf(golf& g);

// 핸디캡을 변경함
void handicap(golf& g, int hc);

// 정보를 보여줌
void showgolf(const golf& g);

#endif