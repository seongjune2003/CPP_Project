
/*
// 02-02 - 마일을 키로미터로 환산해라.
#include <iostream>
using namespace std;

int main()
{
    double mile, km;
    cout << "환산할 마일을 입력하세요: ";
    cin >> mile;
    km = mile * 1.60934;
    cout << mile << "마일은 " << km << "km입니다." << endl;

    return 0;
}
*/

/*
// pe02-03.cpp -- main()을 포함하여 세 개의 사용자 정의 함수를 사용한다
#include <iostream>
using namespace std;
void run();
void attack();

int main() {
    run();
    run();
    attack();
    attack();

    return 0;
}

void run() {
    cout << "걷고 있습니다." << endl;
}

void attack() {
    cout << "공격했습니다." << endl;
}
*/

/*
// 02-04 - 나이를 입력받아 월수로 출력하시오
#include <iostream>;
using namespace std;
int main() {
    int age;                    // age 아래에 age_m을 선언해주면 age가 선언되지 않았기 때문에 age_m의 계산이 안됨.
    cout << "나이를 입력하세요: ";
    cin >> age;
    int age_m = age * 12;       // age_m 이걸 여기에 써줘야 cin에서 age가 초기화 되고 그걸 바탕으로 age_m이 계산된다.
    cout << "당신의 나이를 월로 치환하면 " << age_m << "개월 입니다.";

    return 0;
}
*/

/*
// pe02-05.cpp -- 섭씨를 화씨로 변환한다
#include <iostream>
using namespace std;
double convert_temp(double temp);

int main() {
    double tem;
    cout << "섭씨를 화씨로 변환합니다. 섭씨 온도를 입력해주세요: ";
    cin >> tem;
    double Ftemp = convert_temp(tem);
    cout << "섭씨 " << tem << "도는 화씨 " << Ftemp << "입니다." << endl;
    
    return 0;
}

double convert_temp(double temp) {
    double ftemp = (temp * 1.8) + 32;       // ftemp = temp * 1.8 + 32.0 이렇게 해주면 컴파일러가 자동으로 double형으로 만들어주네.
    return ftemp;
}
*/

/*
// pe02-06.cpp -- 광년을 천문 단위로 변환한다
#include <iostream>
using namespace std;
double convert(double Light_sp);

int main() {
    double light_sp;
    cout << "광년을 입력하세요: ";
    cin >> light_sp;
    double astronomy_sp = convert(light_sp);
    cout << light_sp << "광년 =  " << astronomy_sp << "천문" << endl;

    return 0;
}

double convert(double Light_sp) {
    double Astronomy_sp = Light_sp * 63241.1;
    return Astronomy_sp;
}
*/

/*
// pe02-07.cpp -- 시간과 분을 입출력한다
#include <iostream>
using namespace std;

int main() {
    int hour;
    int min;
    cout << "시간을 입력하세요: ";
    cin >> hour;
    if (hour >= 24 || hour < 0) {
        do {
            cout << "시간은 0부터 23까지만 가능합니다. 다시 입력해주세요: ";
            cin >> hour;
        } while (hour >= 24 || hour < 0);
    }

    cout << "분을 입력하세요: ";
    cin >> min;
    if (min < 0 || min >= 60) {
        do {
            cout << "분은 0부터 59까지만 가능합니다. 다시 입력해주세요: ";
            cin >> min;
        } while (min < 0 || min >= 60);
    }

    cout << "현재 시각은 " << hour << "시 " << min << "분 입니다.";

    return 0;
}
*/

/*
// pe03-01.cpp -- 키를 센티미터로 입력받아 미터와 센티미터로 출력한다
#include <iostream>
using namespace std;

int main() {
    int height;
    const int METER = 100;

    cout << "키를 센티미터 단위로 입력하세요: ";
    cin >> height;
    cout << "당신의 키는 " << height / METER << "m " << height % METER << "cm입니다.";    

    return 0;
}
*/

/*
// pe03-02.cpp -- 비만 지수 BMI를 구하라
#include <iostream>
#include <cmath>
using namespace std;
double bmi_score(double h, double kg);

int main() {
    double height;
    double weight;
    const int METER = 100;

    cout << "키를 입력해주세요: ";
    cin >> height;
    cout << "몸무게를 입력해주세요: ";
    cin >> weight;

    double m_height = height / METER;
    double bmi = bmi_score(m_height, weight);

    if (bmi <= 18.5)
        cout << "저체중입니다.";
    else if (bmi >= 18.5 && bmi <= 22.9)
        cout << "정상입니다.";
    else if (bmi >= 23.0 && bmi < 24.9)
        cout << "과체중입니다.";
    else
        cout << "비만입니다.";


    return 0;
}

double bmi_score(double h, double kg) {
    double bmi_num = kg / pow(h, 2);
    return bmi_num;
}
*/


/*
#include <iostream>
#include <cmath>
using namespace std;
double bmi_score(double h, double kg);

int main() {
    double a = 5 / 10.;     // 분모의 자료형을 따라간다. 그리고 10. 이렇게 숫자 뒤에 .을 찍어주면 float 형이 된다.
    cout << a;

    
    double a = 2.8;
    double b = 0.58;
    double c = a / b;       // 이럴 땐 제대로 소수점까지 나온다.
    cout << c;
    


    return 0;
}
*/

/*
// pe03-04.cpp -- 시간과 분을 입출력한다 // 시간을 초 단위로 입력받아서 일, 시간, 분, 초로 표현한 값을 출력하시오.
#include <iostream>
using namespace std;

int main() {
    const int DAY = 86400;
    const int HOUR = 3600;
    const int MIN = 60;
    int sec, day, hour, minute, second;    // 입력할 초, /환산 일, 시, 분, 초
    cout << "시간을 초 단위로 입력하세요: ";
    cin >> sec;
    day = sec / DAY;
    hour = (sec % DAY) / HOUR;
    minute = (sec % HOUR) / MIN;
    second = sec % MIN;

    cout << sec << "초 = " << day << "일 " << hour << "시간 " << minute << "분 " << second << "초";

    return 0;
}
*/

/*
// 03-05. 세계 인구비중과 미국 인구비중을 입력받고 전자에서 후자의 비율을 구해 출력하시오. // 데이터 종류 형변환을 사용해서.
#include <iostream>
//#include <iomanip>
using namespace std;

int main() {
    double World_Population, Us_Population;
    //cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "세계인구를 입력하세요: ";
    cin >> World_Population;
    cout << "미국인구를 입력하세요: ";
    cin >> Us_Population;

    cout << "세계인구에서 미국인구의 비중은 " << (Us_Population / World_Population) * 100 << "% 입니다.";      // 그냥 하면 정수부분 몫밖에 안나와서 0이 된다. 소수점이 필요
    // setprecision으로는 안되고.   Us랑 World는 맨 처음에 long으로 선언했을 땐 정수형으로 계산이 되서 소수점 계산이 안됐음. 
    // 그래서 static_cast<>든 명시적 형변환이든 double 형으로 꼭 바꿔줘야 소수점까지 나눗셈이 됐었음.
    // 근데 처음에 아예 double형으로 설정하고 시작하면 double 형으로 계산되니까 해결되네.
    // 두번째 줄에 cout.setf 저 부분이 없어도 계산이 된다.

    return 0;
}
*/

/*
// pe03-06b.cpp -- 주행 거리와 소비한 휘발유의 양으로 100킬로미터당 리터 수를 계산한다 (유럽 스타일)
#include <iostream>
using namespace std;

int main() {
    double distance;
    double fuel;

    cout << "주행 거리를 입력하세요: ";
    cin >> distance;
    cout << "소비한 휘발유의 양을 입력하세요: ";
    cin >> fuel;

    cout << "100키로미터당 리터 수는 " << (100 / distance) * fuel << "리터입니다.";

    return 0;
}
*/

/*
// pe03-07.cpp -- 유럽 스타일(100킬로미터당 리터 수)로 묻고, 미국 스타일(갤런당 마일 수)로 변환한다
#include <iostream>
using namespace std;
int main() {
    const double L_per_gallon = 3.875;
    const double mile_per_100km = 62.14;
    double L_per_100km;

    cout << "100km 당 리터 수를 입력하세요: ";
    cin >> L_per_100km;

    cout << "갤런 당 마일 수는 " << L_per_gallon * mile_per_100km / L_per_100km << "마일입니다.";

    return 0;
}
*/

/*
// pe04-01.cpp -- 이름, 학점, 나이를 키보드로부터 읽어들여 다시 출력한다
#include <iostream>
using namespace std;

//struct Student {
//    char Name[20];
//    char Grade;
//    int Age;
//};

class Student {         // 이렇게 클래스로 해줘도 되긴하지만 멤버변수에 직접 접근할 수 있는 것은 정보은닉 면에서 좋은 예시는 아니다. 
public:
    char Name[20];
    char Grade;
    int Age;
};

int main() {
    Student std;
    cout << "이름을 입력하세요: ";
    //cin >> std.Name;                         // 이렇게 해버리면 20자를 넘는 글자에서 오류가 뜨면서 결과가 나온다. 길이를 제한해줘야됨
    cin.getline(std.Name, 20);              // cin.getline(저장공간, 저장할 최대길이); 
    cout << "학점을 입력하세요: ";
    cin >> std.Grade;
    cout << "나이를 입력하세요: ";
    cin >> std.Age;

    cout << "이름 : " << std.Name << ", 학점 : " << std.Grade << ", 나이 : " << std.Age;

    return 0;
}
*/

/*
// pe4-2.cpp -- string 객체에 문자열 저장하기
#include <iostream>
#include <string>          // char은 공백을 포함하지 못함.(틀림 char abs[20]하고 getline으로 공백 포함 받을 수는 있음. 길이를 직접 설정해주는게 귀찮아서 string 쓰는것) string을 사용해야 공백을 포함한 문자열을 담을 수 있다.
using namespace std;

int main() {
    string name;
    string dessert;

    cout << "이름을 입력하세요: ";
    getline(cin, name);             // getline으로 처리해줘야 띄어쓰기 같은 공백을 포함할 수 있어요. 
    cout << "디저트를 입력하세요: ";
    getline(cin, dessert);
    cout << name << "님 맛있는 " << dessert << " 디저트를 준비했습니다.";
    
    return 0;
}
*/

/*
// pe04-03.cpp -- char형 배열에 문자열 저장하기        // 이름과 성을 입력받아 풀네임을 만드시오  //strncpy_s, strcat_s, strncat_s 사용
#include <iostream>
#include <cstring>      // strncpy, strcat, strncat 사용
using namespace std;

int main() {
    const int SIZE = 20;
    char First_Name[SIZE];
    char Last_Name[SIZE];
    char Full_Name[SIZE * 2 + 1];                     // 맨뒤 null값 포함(1)

    cout << "퍼스트 네임(이름)을 입력하세요: ";
    cin.getline(First_Name, SIZE);
    cout << "라스트 네임(성)을 입력하세요: ";
    cin.getline(Last_Name, SIZE);

    // 풀네임에 합치기
    strncpy_s(Full_Name, First_Name, SIZE);           // 퍼스트 네임 복사해서 붙여넣기
    strcat_s(Full_Name, " ");                         // 성과 이름사이 공백넣기
    strncat_s(Full_Name, Last_Name, SIZE);            // 라스트 네임 복사해서 붙여넣기
    Full_Name[SIZE * 2] = {0};                        // 널로 초기화
    cout << "풀네임은 " << Full_Name << endl;

    return 0;

}
*/

/*
// pe04-04.cpp -- 이름, 성을 입력받아 출력한다          // append 사용
#include <iostream>
#include <cstring>          // append 사용
using namespace std;

int main() {
    const int SIZE = 20;
    char First_Name[SIZE];
    char Last_Name[SIZE];

    cout << "퍼스트 네임(이름)을 입력하세요: ";
    cin.getline(First_Name, SIZE);
    cout << "라스트 네임(성)을 입력하세요: ";
    cin.getline(Last_Name, SIZE);
    cout << First_Name << " " << Last_Name;

    return 0;
}
*/

/*
// pe04-05.cpp -- 구조체를 선언하고 초기화한 다음, 구조체의 멤버를 출력한다
#include <iostream>
#include <string>
using namespace std;

struct Product {
    string product_name;              // string은 char[size]와 달리 길이를 직접 입력하지 않아도 되서 좋다. 다만 차이점은 == 에서 발생한다. char[size]면 구성요소가 같으면 동일하다는 결과가 나오지만 
    int voltage;                      // string은 값이 있는 좌표를 가지는 포인터이기 때문에 내용물이 같아도 둘의 == 결과가 다르다고 나온다. 메모리에 저장된 주소값이 다르기 때문이다. string에서 == 비교를 하고 싶으면
    int price;                        // .equals() 함수를 쓰도록 하자.
};

int main() {
    Product pro = { "Powerful fan", 220, 450 };
    cout << "제품이름 : " << pro.product_name << endl;
    cout << "전압 : " << pro.voltage << "V" << endl;
    cout << "가격 : " << pro.price << "달러";
    
    return 0;
}
*/

/*
// pe04-06.cpp -- 구조체의 배열을 선언하고 초기화한 다음, 각 구조체의 내용을 출력한다
#include <iostream>
#include <string>
using namespace std;

struct Dessert {            // 구조체든 클래스든 그 자체로는 찍어내는 틀에 불과함. 객체로 생성해내야 한다.
    string name;
    int price;
    string location;
};

int main() {
    Dessert order[3] = {            // 구조체(혹은 클래스)[size]로 여러개를 찍어낼 수 있다.
    {"Mochi", 5, "second floor"},
    {"Ice cream", 7, "first floor"},
    {"Cookie", 3, "third floor"}
    };

    cout << order[0].name << " is " << order[0].price << " dollar and is located in " << order[0].location << endl;
    cout << order[1].name << " is " << order[1].price << " dollar and is located in " << order[1].location << endl;
    cout << order[2].name << " is " << order[2].price << " dollar and is located in " << order[2].location << endl;

    return 0;
}
*/

/*
//  pe04-07.cpp -- 구조체 선언, 멤버 입력, 멤버 출력
#include <iostream>
#include <string>
using namespace std;

struct Drink {
    string name;
    int amount;
    int temperture;
};

int main() {
    Drink drink;
    cout << "음료 이름: ";
    getline(cin, drink.name);
    cout << "음료 양: ";
    cin >> drink.amount;
    cout << "음료의 온도: ";
    cin >> drink.temperture;

    cout << "음료이름: " << drink.name << endl;
    cout << "음료 양: " << drink.amount << "L" << endl;
    cout << "음료의 온도: " << drink.temperture << "도" << endl;

    return 0;
}
*/

/*
// pe04-08.cpp -- 동적 구조체 선언, 멤버 입력, 멤버 출력
// 동적할당 - 프로그래밍 실행 동안 사용할 메모리 공간을 할당. 다 쓴 후에는 해제 해주어야함.
#include <iostream>
#include <string>
using namespace std;

struct fruit {
    string name;
    int amount;
    double weight;
};

int main() {
    fruit* apple = new fruit;       // 동적할당 (메모리 공간을 할당)
    // 값 입력
    cout << "과일 이름은?: ";
    getline(cin, apple->name);
    cout << "과일의 개수는?: ";
    cin >> apple->amount;
    cout << "과일의 무게는?: ";
    cin >> apple->weight;

    cout << endl;
    cout << "과일 이름 : " << apple->name << " 과일의 개수 : " << apple->amount << " 과일의 무게 : " << apple->weight;
    delete apple;       // 다 썼으니 메모리 공간 해제

    return 0;
}
*/

/*
// pe04-09.cpp -- 구조체 배열을 동적으로 할당하고, 초기화한 다음, 각 구조체의 내용을 출력한다
#include <iostream>
#include <string>
using namespace std;

struct animal {
    string name;
    int number=0;       // 기본값 설정
    int line=0;
};

int main() {
    animal* ani = new animal[3];        // 동적할당
    ani[0].name = "사자";               // char[size] 형태면 strcpy_s로 옮겼어야겠지만 여기선 string으로 했고 접근제한도 없으니 바로 입력할 수 있다.
    ani[0].number = 1;
    ani[0].line = 1;

    ani[1].name = "호랑이";
    ani[1].number = 2;
    ani[1].line = 2;

    ani[2].name = "보아뱀";
    ani[2].number = 3;
    ani[2].line = 3;

    cout << "1번동물 : " << ani[0].name << endl;
    cout << "번호 : " << ani[0].number << endl;
    cout << "라인 : " << ani[0].line << endl;

    cout << "2번동물 : " << ani[1].name << endl;
    cout << "번호 : " << ani[1].number << endl;
    cout << "라인 : " << ani[1].line << endl;

    cout << "3번동물 : " << ani[2].name << endl;
    cout << "번호 : " << ani[2].number << endl;
    cout << "라인 : " << ani[2].line << endl;

    delete [] ani;                     // 할당해제 (배열이니까 배열로)

    return 0;
}
*/

/*
// 04-10  대쉬기능을 만들고 몇번 대쉬를 사용했는지, 대쉬사용 시간의 평균을 구하시오.
#include <iostream>
using namespace std;

class Dash {
private:
    double time;
public:
    Dash() {            //생성자
        time = 0;
    }
    void set(double t) {
        time = t;
    }
    double get(void) {      // 인수로 아무것도 입력하지 않았을 때 void로 설정
        return time;
    }
};

int main() {
    int count = 0;
    int sum = 0;
    int input = 0;
    Dash* dash[3];

    for (int i = 0; i < 3; i++) {
        dash[i] = new Dash();           // 메모리 할당 (위에 문제랑은 방법이 조금 다름)
    }
    for (int i = 0; i < 3; i++) {
        cout << i+1 << "번째 대시 시간을 입력하세요: ";
        cin >> input;
        dash[i]->set(input);
        count++;
    }
    for (int i = 0; i < 3; i++) {
        sum += dash[i]->get();
    }
    cout << "대시 사용횟수 " << count << " 대시 사용시간 평균: " << sum / 3;

    for (int i = 0; i < 3; i++) {       // 메모리 할당 해제
        delete dash[i];
    }

    return 0;
}
*/

/*
// pe05-01.cpp -- 두 개의 정수를 입력받아 그 구간에 속한 모든 수의 합을 구한다
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum = 0;
    do {
        cout << "첫 번째 정수를 입력하세요: ";
        cin >> num1;
        cout << "두 번째 정수를 입력하세요: ";
        cin >> num2;
    } while (num1 >= num2);

    for (int i = num1; i <= num2; i++) {                // 다만 이렇게 하면 num1이 num2보다 클 때 값을 구할 수 없지. 난 do while문으로 입력범위의 제한을 뒀다.
        sum += i;
    }
    cout << "범위 내 모든 수의 합은: " << sum << "입니다.";

    return 0;
}
*/

/*
// 05-02   팩토리얼을 100번째 순서까지 나타내시오. array를 활용해보시오.   array<데이터타입, 개수> 형태로 쓰면 된다.
#include <iostream>
#include <array>
using namespace std;

int main() {
    const int arrsize = 101;    // 100까지
    array<int, arrsize> factorial;
    factorial[0] = factorial[1] = 1;
    for (int i = 2; i < arrsize; i++) {
        factorial[i] = i * factorial[i - 1];
    }
    for (int i = 0; i < arrsize; i++) {
        cout << factorial[i] << endl;
    }

    return 0;
}
*/

/*
// pe05-03.cpp -- 임의로 입력하는 수들의 합을 구한다
#include <iostream>
using namespace std;
int main() {
    int num;
    int sum=0;
    cout << "숫자를 입력하세요, 입력을 멈추고 싶다면 000을 입력하세요" << endl;
    do {
        cin >> num;
        sum += num;
    } while (num != 000);
    cout << "입력된 숫자들의 총합은 " << sum << "입니다.";

    return 0;
}
*/

/*
// pe05-04.cpp -- 복리와 단리의 계산    // 동일한 금액의 두 고객. 이율은 0.1% 단리, 0.05% 복리. 복리의 총금액이 단리의 총금액을 넘는 년도와 그 때 총 적금액을 출력하시오.
#include <iostream>
using namespace std;

// main에 다 쓰면 보기 안좋아서 빼줬다.
const unsigned int A_money = 100000;
const unsigned int B_money = 100000;
const float simple_interest = 0.1f;
const float compound_interest = 0.05f;

int main() {
    unsigned int A_value = A_money;
    unsigned int B_value = B_money;
    int year = 1;                       // year가 지역변수라 year를 똑같이 아래 for문에 써주면(i대신 year를 쓰면) for문이 끝나고 for문 내의 year값이 없어짐. 따로 지역변수를 변경해주는 작업이 필요해.

    for (int i = 1; A_value >= B_value; i++) {      // 단리의 이익이 복리의 이익보다 높을 때 계속 돌림
        A_value += simple_interest * A_money;       // 단리
        B_value += compound_interest * B_value;     // 복리
        cout << year << "년 후 A: " << A_value << " B: " << B_value << endl;
        year++;
    }
    year--;                             // 마지막 year++ 해준거는 한번 빼줘야지

    cout << "복리(B)가 단리(A)의 이익을 초과하는 년도는 : " << year << "년 후 입니다." << endl;
    cout << year << "년 후 A의 금액: " << A_value << endl;
    cout << year << "년 후 B의 금액: " << B_value << endl;

    return 0;
}
*/

/*
// pe05-05.cpp -- 월간 판매량을 입력받아 연간 총 판매량을 계산한다
#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    const char* MonthName[12] = { "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월" };  // 아래참고
    int MonthSale[12];          // int형 자료가 저장되는 12크기의 배열

    for (int i = 0; i < 12; i++) {
        cout << MonthName[i] << " 판매량: ";
        cin >> MonthSale[i];
        sum += MonthSale[i];
    }

    cout << "연간 총 판매량: " << sum << endl;

    return 0;
}

// char s1[100]로 설정된 s1에 "hello"라는 문자열로 초기화하면 6자리만 입력되고 나머지 94자리는 빈공간이 됨. 즉 공간의 낭비. 이걸 막기 위해서
// char* s2 = "hello"를 해주면 s2에 hello라는 문자열이 저장된 첫 주소값이 저장됨.
// 만약 포인터 s2를 숫자로 출력하면 주소값 숫자가 나올거고 문자로 출력하면 입력된 문자 hello가 나오게 된다.
// 즉 위 예제에서 const char* MonthName[12] = {...}; 이 부분은 12개의 문자열을 각 문자열 포인터 MonthName[i]에 저장하는 것임. 그래서 cout << MonthName[i] 했을 때 char형인 각 값이 출력되는 것.
// 메모리에 저장된 12개의 문자열을 가리키는 12개의 문자열 포인터를 생성했고 반환형이 문자형이니 저장된 값이 출력되는 것.
*/

/*
// pe05-06.cpp -- 3년 동안의 월간 판매량을 입력받아 2차원 배열에 저장한다
#include <iostream>
using namespace std;
const int Years = 3;            // 우선 지역변수로 빼줘야하는게 무엇인지 생각
const int Months = 12;


int main() {
    int TotalSale = 0;
    int sum[Years] = { 0, 0, 0 };
    const char* MonthName[Months] = { "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월" };
    int MonthSale[Years][Months];

    for (int i = 0; i < Years; i++) {
        cout << i + 1 << "번째 연도" << endl;
        for (int j = 0; j < Months; j++) {
            cout << j + 1 << "월의 판매량을 입력하세요: ";
            cin >> MonthSale[i][j];
            sum[i] += MonthSale[i][j];
        }
    }

    for (int i = 0; i < Years; i++) {
        TotalSale += sum[i];
        cout << i + 1 << "년간 판매량: " << TotalSale << endl;
    }

    return 0;
}
*/


//// pe05-07.cpp -- new를 사용하여 동적 구조체 배열 만들기   // 자동차 보유목록(제조업체, 제조년도) 안내 시스템을 만들어라
//#include <iostream>
//using namespace std;
//
//struct Car {                // 찍어낼 틀
//    char Maker[20];
//    int MakeYear;
//};
//
//int main() {
//    int count;
//    cout << "몇 대의 차를 등록할 것입니까?: ";
//    cin >> count;
//
//    Car* car = new Car[count];      // 동적할당
//
//    for (int i = 0; i < count; i++) {
//        cout << i + 1 << "번째 차의 제조업체를 입력하세요.: ";
//        cin >> car[i].Maker;
//        cout << i + 1 << "번째 차의 제조년도를 입력하세요: ";
//        cin >> car[i].MakeYear;
//    }
//
//    cout << "현재 귀하가 가지고 있는 차의 목록은 다음과 같습니다." << endl;
//    for (int i = 0; i < count; i++) {
//        cout << car[i].MakeYear << "제조년형 " << car[i].Maker << endl;
//    }
//
//
//    delete [] car;                  // 동적할당 해제
//    return 0;
//}


/*
// pe05-08.cpp -- C 스타일 문자열을 사용하여 단어 수 카운트하기
#include <iostream>
#include <cstring>      //strcmp의 원형        // strcmp(a,b)   a와 b가 완전히 같으면 0, 다르면 1 반환
using namespace std;
const int Size = 20;

int main() {
    char word[Size];
    int count = 0;

    cout << "단어를 입력하세요. 입력을 멈추려면 end를 입력하세요.";
    while (cin >> word && strcmp(word, "end"))          while (1) (=참이면)  즉, strcmp(word, "end")가 1이 나온 경우에 참으로 처리. strcmp은 두 인자가 다를때 1을 반환함 (같을 땐 0)
        count++;
    
    cout << "총 단어의 수는 " << count << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <cstring>      //strcmp의 원형
using namespace std;


int main() {
    const char* s = "cheer up";
    bool a = strcmp(s, "cheer ups");
    cout << a;

    return 0;
}
*/

/*
// pe05-09.cpp -- 단어의 개수를 카운트한다
#include <iostream>
#include <string>
using namespace std;
int cnt = 0;         // count로 썼을 때 모호성 오류 뜬건 stl에 있는 count랑 이름이 같아서 컴파일러가 헷갈려하는 것임. std::  이런식으로 일일히 쓰거나 count의 이름을 바꾸면 해결됨
string word;

int main() {
    cout << "단어를 입력하세요. 끝내고 싶다면 done을 입력하세요: ";

    while (1) {             // while(1)   참일때
        cin >> word;
        if (word == "done")
            break;
        cnt++;
    }

    cout << "단어의 총 개수는 " << cnt << "개 입니다.";
    return 0;
}
*/


// pe05-10.cpp -- '*'를 출력한다     // 피라미드 함 쌓아봐라.
#include <iostream>
using namespace std;
int line = 0;

int main() {
    cout << "출력할 행 수를 입력하시오: " << endl;
    cin >> line;

    for (int i = 0; i < line; i++) {
        for (int j = 1; j < line - i; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
        
    return 0;
}
