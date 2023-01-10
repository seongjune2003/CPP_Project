// golf.h  ������� (īŻ�α��� �̸��� �̾Ƴ��� �Ŷ� �����. �̸��� ���� ������ cpp���Ͽ���)
#ifndef GOLF_H_
#define GOLF_H_

const int len = 40;
struct golf {
	char fullname[len];
	int handicap;
};

// �Ű������� �־��� �̸�, �ڵ�ĸ���� ����
void setgolf(golf& g, const char* name, int hc);

// ��������׼� �Է¹��� ��� ������ ������. �̸��� �ԷµǸ� 1��, �Էµ��� ������ 0�� ��ȯ��
int setgolf(golf& g);

// �ڵ�ĸ�� ������
void handicap(golf& g, int hc);

// ������ ������
void showgolf(const golf& g);

#endif