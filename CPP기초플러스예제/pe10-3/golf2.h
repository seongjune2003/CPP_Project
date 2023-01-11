// golf2.h	// golf 클래스 선언
#ifndef GOLF2_H_
#define GOLF2_H_

class Golf {
private:
	enum { Len = 20 };
	char fullname[Len];
	int handicap;
public:
	Golf();
	Golf(const char* name, int hc);
	int setgolf(Golf& g);
	void sethandicap(int hc);
	void updatehandicap();
	void showgolf() const;
};

#endif
