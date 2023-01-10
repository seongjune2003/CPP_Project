
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

/*
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
*/

/*
// 참고
char x;
cin.get(x);     // cin >> x;와 동일
cout.put(x);    // cout << x;와 동일
*/

/*
// pe06-01.cpp      // 1) 알파벳 혹은 숫자인가?   2) 숫자인가? - 숫자이면 제외  3) 대문자면 -> 소문자로 / 소문자면 -> 대문자로  4) 알파벳, 소문자 둘다 아니면 X    5) 종료키 설정
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "영어문장을 입력하세요. 끝내려면 @를 입력하세요.";
    cin.get(ch);                          // cin.get(); 입력한 단일 문자를 정수형으로 변환하여 리턴값으로 사용      cin.get(문자변수);  입력한 문자를 문자변수에 저장.
    while (ch != '@') {
        if (isalnum(ch)) {
            if (isdigit(ch))
                ;       // 숫자면 건너뜀
            else if (islower(ch))
                cout.put(toupper(ch));
            else
                cout.put(tolower(ch));
        }
        else
            cout.put(ch);
        cin.get(ch);        // 반복
    }

    return 0;
}
*/

/*
// pe06-02.cpp      // 기부금을 받아서 1. 평균 기부금 금액과  2. 평균 기부금 금액보다 더 많이 기부한 사람의 수를 구하시오.
// 필요한 것 - 기부한 사람 수, 
#include <iostream>
using namespace std;
const int MAX = 10;

int main() {
    double donation[MAX];       // 기부금 받은걸 저장할 배열
    double sum = 0;             // 기부 총액
    int best_donator = 0;           // 평균 기부금 초과 기부자 수

    int i;
    for (i = 0; i < MAX; i++) {
        cout << i + 1 << "번째 기부자입니다. 기부금액을 입력하세요: ";
        cin >> donation[i];
        sum += donation[i];
    }
    double avg = sum / MAX;

    if (i == 0)
        cout << "기부한 사람이 없습니다." << endl;
    else {
        for (int j = 0; j < i; j++) {
            if (donation[j] > avg)
                best_donator++;
        }
    }

    cout << "평균 기부액은: " << avg << "원 입니다." << endl;
    cout << "평군 기부액보다 많이 기부한 사람의 수는 " << best_donator << "명 입니다." << endl;

    return 0;
}
*/

/*
// pe06-03.cpp      // switch - case 문으로 입력에 따라 결과가 달라지게 하시오. // 건물 층별 안내프로그램 만들어보자
#include <iostream>
using namespace std;
void floor() {
    cout << "다음 중 하나를 고르세요. (끝내려면 'q' 입력)\n"
        "f(1층)   s(2층)\n"
        "t(3층)   F(4층)\n";
}

int main() {
    char choice;
    floor();
    cin >> choice;
    while (choice != 'q') {
        switch(choice) {
        case 'f': cout << "1층은 카페입니다.\n";
            break;
        case 's': cout << "2층은 사무실입니다.\n";
            break;
        case 't': cout << "3층은 오피스텔입니다.\n";
            break;
        case 'F': cout << "4층은 쇼핑몰입니다.\n";
            break;
        default: while ((choice == 'f' || choice == 's' || choice == 't' || choice == 'F')) {
            cout << "f, s, t, F 중 하나를 선택하세요. (끝내래면 'q'): ";
            cin >> choice;
            if (choice == 'q')
                break;
        }
               //continue;      // continue

        }
        cout << "f, s, t, F 중 하나를 선택하세요. (끝내래면 'q'): ";
        cin >> choice;
    }
    
    cout << "프로그램을 종료합니다.";
    return 0;
}
*/

/*
// 동적할당. new delete로 하는건 너무 올드한 방식이다. 할때마다 int* arr = new int[n]; 이렇게 해주기도 번거롭고, 크기가 바뀔때도 문제가 생기기 쉽다. 10짜리 입력을 받는 arr[10]으로만 쓰다가 도중에 
// 200, 300 이런걸 입력받는다고 생각해봐. 그렇다고 arr[20000]이렇게 너무 크게 잡으면 메모리를 낭비하는 꼴이 되고. 입력값에 맞게 필요한 크기를 알아서 동적할당해주는 기능이 있으면 좋겠지.
// 이런 경우에 백터를 쓰면 된다.   (tmi. 만약 key - value 값 형태의 데이터를 저장하고 싶은거면 map을 쓰면된다.)
// https://breakcoding.tistory.com/139

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    for (int i = 0; i < v.size(); i++) {        // v.size()는 여기서 백터의 크기를 돌려준다.
        cout << v[i] << endl;
    }
    return 0;
}
// 이렇게 하면 번거롭지 않게 할 수 있따.
*/

// 만약 벡터의 크기를 정해주고 싶으면 vector<int> v(3); 이런식으로 정해주면 된다. 이렇게 되면 v[0] v[1] v[2] 이렇게 인덱스로 접근하는 것이 가능하다.
// 초기값을 5로 주고 싶다면 v(3, 5)의 형태로 주면 전부 5로 초기화가 된다.
// 값을 다 다르게 줄수도 있는데    vector<int> v(3) = {1, 17, 30); 이렇게 줄 수 있다.
*/


/*
// pe06-04.cpp      // 구조체로 회원 실명, 직함, BOP아이디, 회원의 선택을 입력받고,  입력받는 값에 따라 저장된 값을 출력하도록 프로그램을 짜보시오.
#include <iostream>
#include <string>
using namespace std;

struct bop {
    string fullname;    // 실명
    string title;       // 직함
    string bopID;       // BOP아이디
    int preference;  // 회원의 선택  // 0 : 실명, 1 : 직함, 3 : BOP아이디
};

void showmenu();
void show_by_fullname(bop boplist[], int count);
void show_by_title(bop boplist[], int count);
void show_by_bopID(bop boplist[], int count);
void show_by_preference(bop boplist[], int count);

int main() {
    bop boplist[5] = {
        {"Alice", "A", "AL", 0},        // 4번째 숫자는 그 값에 따라 show_by_preference에서 값이 다르게 출력됨
        {"Alex", "Al", "BB", 1},
        {"June", "J", "JJ", 2},
        {"BBBBB", "B", "DDSD", 1},
        {"CCCCC", "C", "CSCC", 2}
    };

    char choice;
    showmenu();
    cin >> choice;
    while (choice != 'q' && choice != 'Q') {
        switch (choice) {
        case 'f':
        case 'F': show_by_fullname(boplist, 5);
            break;
        case 't':
        case 'T': show_by_title(boplist, 5);
            break;
        case 'i':
        case 'I': show_by_bopID(boplist, 5);
            break;
        case 'p':
        case 'P': show_by_preference(boplist, 5);
            break;
        }
        cout << "원하는 것을 입력하세요: ";
        cin >> choice;
        if (choice == 'q' || choice == 'Q')
            break;
    }
    cout << "프로그램 종료";
    return 0;
}


void showmenu() {
    cout << "안녕하세요. 입력된 값을 보고 싶으면 아래 선택지에서 하나를 고르고 입력하세요. (그만두고 싶으면 q를 누르세요.)" << endl;
    cout << "f를 누르면 실명데이터를 보여줌." << endl;
    cout << "t를 누르면 직함을 보여줌." << endl;
    cout << "i를 누르면 BOP 아이디를 보여줌." << endl;
    cout << "p를 누르면 회원의 선택에 따라 정보를 보여줌." << endl;
    cout << "원하는 것을 입력하세요: ";
}

void show_by_fullname(bop boplist[], int count) {
    for (int i = 0; i < count; i++) {
        cout << boplist[i].fullname << endl;
    }
}

void show_by_title(bop boplist[], int count) {
    for (int i = 0; i < count; i++) {
        cout << boplist[i].title << endl;
    }
}

void show_by_bopID(bop boplist[], int count) {
    for (int i = 0; i < count; i++) {
        cout << boplist[i].bopID << endl;
    }
}

void show_by_preference(bop boplist[], int count) {
    for (int i = 0; i < count; i++) {
        switch (boplist[i].preference) {
        case 0: cout << boplist[i].fullname << endl;
            break;
        case 1: cout << boplist[i].title << endl;
            break;
        case 2: cout << boplist[i].bopID << endl;
            break;
        }
    }
}
*/

/*
// pe06-05.cpp      // 소득을 입력받아 세금을 계산해 출력하는 프로그램을 작성하시오. // 5000이하는 비과세. 5000~15000에 해당하는 값은 0.1, 15000 ~ 35000에 해당하는 값은 0.15, 그 이상은 0.2 세율 부과
#include <iostream>
using namespace std;

int main() {
    int income;
    int tax;
    cout << "소득을 입력하세요: ";
    cin >> income;
    
    if (income <= 5000)
        tax = 0;
    else if (income > 5000 && income <= 15000)
        tax = (income - 5000) * 0.1;
    else if (income > 15000 && income <= 35000)
        tax = 10000 * 0.1 + (income - 15000) * 0.15;
    else
        tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;

    cout << "총 세금은 : " << tax << "원 입니다.";
    return 0;
}
*/

/*
// pe06-06.cpp      // 기부자 구조체를 만들어 기부자 이름과 기부금을 입력받고,  고액기부자, 소액기부자(10000 기준)의 수를 출력하는 함수를 만들어 정보를 출력하시오. + 동적할당으로 메모리 공간을 할당하시오.
#include <iostream>
#include <string>
using namespace std;

struct donator {
    string name;
    int donation;
};

void show_grand_patron(donator* p_donator_array, int num);
void show_patron(donator* p_donator_array, int num);

int main() {
    int num_donator;
    cout << "몇명이 기부했습니까?: ";
    cin >> num_donator;
    donator* pdonator = new donator[num_donator];   // 동적할당

    int i;
    for (int i = 0; i < num_donator; i++) {         // 데이터 입력
        string s;
        cout << i+1 << "번 기부자 이름: ";
        cin >> pdonator[i].name;
        cout << "기부금액: ";
        cin >> pdonator[i].donation;
    }

    show_grand_patron(pdonator, num_donator);
    show_patron(pdonator, num_donator);

    delete[] pdonator;      // 동적할당 해제
    return 0;
}

void show_grand_patron(donator* p_donator_array, int num) {
    int count = 0;
    for (int i = 0; i < num; i++) {
        if (p_donator_array[i].donation >= 10000) {
            cout << "고액기부자: " << p_donator_array[i].name << ", 기부금: " << p_donator_array[i].donation << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "고액기부자가 없습니다.";
}

void show_patron(donator* p_donator_array, int num) {
    int count = 0;
    for (int i = 0; i < num; i++) {
        if (p_donator_array[i].donation < 10000) {
            cout << "소액기부자: " << p_donator_array[i].name << ", 기부금: " << p_donator_array[i].donation << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "소액기부자가 없습니다.";
}
*/

/*
// pe06-07.cpp       단어를 입력받아 모음으로 시작하는 단어, 자음으로 시작하는 단어, 그외 문자로 시작하는 단어의 개수를 출력하시오.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    char ch;            // 첫 문자
    int vowel = 0;      // 모음
    int consonant = 0;  // 자음
    int other = 0;       // 그외

    cout << "단어를 입력하시오, 끝내려면 'q'를 입력하시오: ";
    cin >> word;

    while (word != "q") {       // string 비교할때는 ""사용
        ch = tolower(word[0]);          // 소문자로 만들고 맨 처음 문자 확인
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o')
                vowel++;
            else
                consonant++;
        }
        else
            other++;
        cin >> word;
    }
    cout << "모음으로 시작하는 단어 수:  " << vowel << endl;
    cout << "자음으로 시작하는 단어 수:  " << consonant << endl;
    cout << "그외 문자로 시작하는 단어 수:  " << other << endl;

    return 0;
}
*/

/*
// ostream 파일 제작용 코드
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream writeFile;             // 쓰기용 파일
    writeFile.open("test.txt");     // 파일 열기 (파일이 없으면 만들어짐)

    // string 문자열 사용           // char[]로 받는 것 보다 string으로 받는 게 크기지정 안해줘도 되서 더 편함
    string str = "Be a programming gru is my dream.";
    writeFile.write(str.c_str(), str.size());

    // str.c_str() : C++ string -> const char* 으로 변환해주는 함수

    writeFile.close();              // 파일 열었으면 꼭 닫아주기
    return 0;
}
*/



/*
// pe6-8.cpp -- 문자 수 카운트하기      // 파일에 문자가 몇개 들어있는지 세시오.
// ifstream 읽기.  ostream 쓰기     // 둘다 <fstream> 헤더파일에 있음
// 지금 이 코드는 파일을 만든게 아니기 때문에 실행하면 찾을 수 없다고 나온다. ofstream으로 먼저 파일을 만들어 줘야함 (위에 적은 코드 확인)
#include <iostream>
#include <string>
#include <fstream>              // 파일 입출력
#include <cstdlib>              // exit() 지원
using namespace std;

int main() {
    string filename;            // 파일이름
    char ch;                    // 한문자씩 읽어낼 변수
    ifstream readFile;          // 읽어낼 파일

    cout << "파일이름을 입력하세요: ";
    cin >> filename;
    readFile.open(filename);    // 파일이름에 해당하는 파일을 오픈함.

    // 오픈 실패
    if (!readFile.is_open()) {
        cout << "파일을 읽을 수 없습니다.\n";
        cout << "프로그램을 종료합니다.\n";
        exit(EXIT_FAILURE);
    }
    int count = 0;              // 읽은 항목의 수

    // 오픈에 성공함
    readFile.get(ch);           // get으로 한 글자씩 읽어옴
    while (readFile.good()) {   // 입력이 양호하고 eof(끝)가 아닐 때
        count++;
        readFile.get(ch);       // 다음 걸 읽어옴
    }

    cout << filename << " 파일에는 " << count << "개의 문자가 있습니다.";

    readFile.close();           // 파일 열었으면 닫아줘야함
    return 0;
}
*/

/*
// ifstream, ofstream 참고용 코드
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 프로그램에 내장되어 있는 단어들
    vector<string> words = { "BlackDMask", "banana", "code", "program" };
    int len = static_cast<int>(words.size());       // 형변환으로 맞춰줌

    // ifstream readFile;
    // readFile.open("words.txt");      // 이 두줄을 하나 한줄로 해결
    ifstream readFile("words.txt");

    // 맨 처음 프로그램을 시작하면 파일이 없는 상태일 것
    // 만약, 파일이 없으면 파일을 만들고 기본문자들 세팅
    if (readFile.is_open()) {
        // 파일이 존재해서 열림.
        words.clear();      // 새 단어들을 읽어오기 전에 예제 단어들을 삭제

        while (!readFile.eof()) {       // 끝까지 이동하면서 확인.
            string temp;
            getline(readFile, temp);    // 읽어와서 temp에 저장
            words.push_back(temp);      // temp를 위에서 비운 words에 밀어넣음
        }
        readFile.close();               // 오픈했으면 닫아주기
    }
    else {
        // 파일이 없음. 새로 만들어준다. 
        ofstream writeFile;
        writeFile.open("words.txt");        // 없으니까 새로 만들어줌.
        for (int i = 0; i < len; i++) {
            string temp = words[i];
            if (i != len - 1) {
                temp += "\n";
            }

            writeFile.write(temp.c_str(), temp.size());
        }
        writeFile.close();
    }
    return 0;
}
*/



// pe06-09.cpp      // 06-06의 문제랑 기본적으로 요구하는 바는 동일 (동적할당, 고액기부자 수, 소액기부자 수 출력)





/*
// pe07-01.cpp      // 두 값을 입력받고 조화평균을 구하시오.
#include <iostream>
using namespace std;
double harmonic_mean(double x, double y);

int main() {
    double num1, num2;
    double result;

    cout << "끝내려면 0을 입력하세요.\n";
    cout << "두 수를 입력하세요: ";
    cin >> num1 >> num2;

    while (num1 && num2) {      // 둘 중 하나라도 0이면 끝남.
        result = harmonic_mean(num1, num2);
        cout << "두 수의 조화평균은 " << result << "입니다.";
        cout << "끝내려면 0을 입력하세요.\n";
        cout << "두 수를 입력하세요: ";
        cin >> num1 >> num2;
    }

    return 0;
}

double harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}
*/


/*
// pe07-02.cpp
// 배열에 점수를 입력하시오. 입력받은 점수들을 순서대로 출력하고 평균도 출력하시오. 입력받을 숫자의 개수는 10개
#include <iostream>
using namespace std;
const int Max = 10;

int inputScore(int score[], int maxcount);      // 점수 입력
double calcAvg(int score[], int count);
int outputScore(int score[], int count);        // 점수 출력

int main() {
    int scoreArray[Max];        // int 배열선언

    int count = inputScore(scoreArray, Max);
    outputScore(scoreArray, count);                     // 굳이 count를 뽑아낼 필요가 있나? 그냥 Max로 쓰면 안되나? inputScore 함수는 데이터 입력하는데만 쓰고
    return 0;
}


int inputScore(int score[], int maxcount) {
    cout << "점수를 입력하세요. 끝내려면 q를 입력하시오.";
    cout << "스코어 #1: ";
    int i = 0;
    while (i < maxcount && cin >> score[i]) {
        if (++i < maxcount)
            cout << "스코어 #" << i + 1 << ": ";
    }
    return i;
}


double calcAvg(int score[], int count) {
    int sum = 0;
    double avg;

    for (int i = 0; i < count; i++)
        sum += score[i];
    avg = sum / count;
    return avg;
}

int outputScore(int score[], int count) {
    if (count == 0) {
        cout << "입력된 값이 없습니다.";
        return 0;
    }

    for (int i = 0; i < count; i++) {
        cout << score[i] << "\t";
    }
    cout << endl;
    cout << "전체 평균: " << calcAvg(score, count);
    return 0;
}
*/


/*
// 07-03.cpp  박스의 이름, 가로, 세로, 높이, 부피를 원소로 가지는 구조체를 선언하고 이를 출력하는 프로그램을 작성하시오. 부피 = 가로 * 세로 * 높이로 구하고, 부피를 구하는데 포인터의 개념을 사용하시오.
#include <iostream>
#include <string>
using namespace std;
struct box {
    string name;
    double width;
    double length;
    double height;
    double volume;
};

void showbox(box mybox);
void setbox(box* mybox);    // 부피구하기

int main() {
    box Mybox = { "present box", 10, 20, 30, 0 };
    setbox(&Mybox);         // 여기서 &는 참조.  &(참조)를 통해 Mybox의 메모리를 공유하는 것이기 때문에 setbox로 값을 바꾸면 Mybox의 내용이 바뀐다.  // 인수가 주소이기 때문에 함수 매개변수는 포인터다.
    showbox(Mybox);
    
    return 0;
}

void showbox(box mybox) {
    cout << "이릅: " << mybox.name << endl;
    cout << "가로: " << mybox.width << endl;
    cout << "세로: " << mybox.length << endl;
    cout << "높이: " << mybox.height << endl;
    cout << "부피: " << mybox.volume << endl;
}

void setbox(box* mybox) {
    mybox->volume = mybox->width * mybox->length * mybox->height;
}
*/


/*
// pe07-04.cpp -- 변형 로토 복권 승률 구하기  // 복권 당첨활률 n개의 숫자중에서 p개(사실상 당첨번호 1개)의 숫자를 정확하게 뽑을확률. 이걸 2번 연속으로 성공하면 당첨. "~번중의 한번 꼴로 승리" 이렇게 출력하시오. 
#include <iostream>
using namespace std;
double win(unsigned numbers, unsigned pick);     // 함수원형

int main() {
    double total, choice;
    double first_odd, second_odd = 0;
    cout << "1회차 전체수와 선택수를 입력하세요: ";
    if ((cin >> total >> choice) && choice <= total) {
        first_odd = win(total, choice);         // 1회차 승률
        cout << "2회차 전체수와 선택수를 입력하세요: ";
        if ((cin >> total >> choice) && choice <= total) {
            second_odd = win(total, choice);    // 2회차 승률
            cout << "최종 당첨확률은 " << first_odd * second_odd << "번 분의 1 확률입니다.\n";
        }
    }
    cout << "프로그램 종료\n";
    return 0;
}

// 이 함수는 number 개수의 숫자에서 picks 개의 수를 정확하게 뽑을 확률을 계산한다.
double win(unsigned numbers, unsigned picks) {
    double n;   // 전체 숫자
    double p;    // 뽑는 숫자
    double result = 1.0;  // result 초기화 

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    return result;
}
*/


/*
// pe07-05.cpp -- 재귀 함수 - 자기 자신을 다시 쓰는 함수    // 팩토리얼을 재귀함수로 구현하시오
// 필요한것 -> 팩토리얼을 구할 수 입력. 팩토리얼을 구하는 함수 구현
#include <iostream>
using namespace std;
double factorial(unsigned int num);

int main() {
    unsigned int number;
    cout << "팩토리얼을 구할 숫자를 입력하세요(끝내려면 아무 문자나 입력하세요): ";
    while (cin >> number) {
        cout << number << "의 팩토리얼 값은 " << factorial(number) << "입니다.";
        cout << "팩토리얼을 구할 숫자를 입력하세요(끝내려면 아무 문자나 입력하세요): ";
    }
    cout << "프로그램을 종료합니다.";
    return 0;
}

double factorial(unsigned int num) {        // 팩토리얼은 양수에 대해서만 존재하니까 매개변수를 unsigned int로 설정
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}
*/

/*
// pe07-06.cpp      // 숫자 배열을 만들고, 배열을 채우는 함수, 배열을 좌우로 뒤집는 함수, 배열의 내용을 보여주는 함수를 만드시오.   
// 만든 후에 채우기 - 보여주기 - 뒤집기 - 보여주기 - 뒤집기(다르게해서) - 보여주기  형식으로 출력하시오.

#include <iostream>
using namespace std;

const int Max_count = 10;

int fill_array(double array[], int Max_count);      // 여기서 아래 두 함수에서 사용할 count를 return함
void show_array(double array[], int count);
void reverse_array(double array[], int count);

int main() {
    double num_array[Max_count];        // 먼저 double 형 array 생성
    int count = fill_array(num_array, Max_count);
    show_array(num_array, count);
    reverse_array(num_array, count);
    show_array(num_array, count);

    return 0;
}

int fill_array(double array[], int Max_count) {
    int count = 0;
    for (int i = 0; i < Max_count; i++) {
        cout << i + 1 << "번째 원소: ";
        if (!(cin >> array[i]))             // 입력이 없으면. 혹은 array가 double로 선언되어 있으니까 문자가 들어간다면 에러 발생. break로 빠져나온다.
            break;
        count++;
    }
    return count;
}

void show_array(double array[], int count) {
    for (int i = 0; i < count; i++) {
        cout << i+1 << "번째 요소: " << array[i] << "\n";
    }
}

void reverse_array(double array[], int count) {
    int i, j, temp;
    for (int i = 0, j = count - 1; i < j; i++, j-- ) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
*/


/*
// pe07-07.cpp  ***(다시 보셈)
// 부동산 가격을 채우고, 입력된 값을 보여주고, 가격을 재평가하는 함수를 각각 만들어 실행하시오. 숫자 배열로 입력받되 포인터를 활용해 함수를 만드시오.
// 숫자 배열을 채워줌 -> 값을 보여줌 -> 재평가 -> 다시 값을 보여줌.    // 필요한 것 - fill, show, reevaluate 함수의 구현. 포인터의 활용
#include <iostream>
using namespace std;
const int Max = 10;

double* fill_array(double* begin, double* end);
void show_array(const double* begin, const double* end);        // show는 값을 변경하는 것이 아니므로 const 매개변수 사용. (값 변경금지)
void reevaluate_array(double* begin, double* end);

int main() {
    double array[Max];  // double array 생성
    
    double* end = fill_array(array, array + Max);       // 배열은 포인터고, 배열을 그대로 쓰면 맨 처음 주소값을 가리킨다. 따라서 begin 자리에 array를 넣으면 됨
    show_array(array, end);     
    reevaluate_array(array, end);
    show_array(array, end);

    return 0;
}

double* fill_array(double* begin, double* end) {
    int temp;           // 가격 입력
    double* pt;        // 숫자배열에서 가격을 가리킬 포인터
    int i = 0;
    for (pt = begin; pt < end; pt++) {
        cout << i + 1 << "번째 부동산 가격: ";
        cin >> temp;
        // 입력 불량과 음수일때 예외처리
        if (!cin) {                     // 입력불량이라면
            cin.clear();                // cin 에러를 정상화하고 다시 입력받을 수 있게함
            while (cin.get() != '\n')   // cin.get()으로 한글자 가져온 문자가 엔터가 아니면. == 즉, 위에 cin.clear로 버퍼에 데이터가 제대로 지워졌다면
                continue;               // continue 문으로 for문을 끝 위치로 이동하면 다시 for문을 돌면서 입력을 받는다.
            cout << "입력불량. 프로그램을 종료합니다.\n";     // 버퍼에 엔터가 남아있으면 break 문으로 for문을 빠져나감.
            break;
        }
        else if (temp < 0) {            // 입력받은 값이 음수라면
            break;
        }
        *pt = temp;     // 제대로 입력이 됐으면 포인터 pt의 현 주소에 temp 값을 입력함. 그리고 for문을 반복하면서 값을 다 채움
    }
    return pt;          // 끝까지 돌았기 때문에 end 위치에 포인터 pt가 도착하게 됨. 이걸 반환해서 나머지 2개 함수에서 매개변수로 사용한다.
}

void show_array(const double* begin, const double* end) {
    const double* pt;
    int i = 0;
    for (pt = begin; pt < end; pt++) {
        cout << ++i << "번째 부동산 가격: " << *pt << endl;
    }
}

void reevaluate_array(double* begin, double* end) {
    double* pt;
    double rate;
    cout << "재평가율을 입력하세요: ";
    cin >> rate;
    for (pt = begin; pt < end; pt++) {
        //*pt = *pt * rate;
        *pt *= rate;
    }
}
*/


// 함수의 매개변수로 무엇을 줘야하는가? -> 입력을 받아서 변경할, 혹은 보여줄 대상이 되는 값들을 받는다.
// 변경할지, 변경하지 않을지에 따라 매개변수에 const를 붙이는 것을 선택할 수 있고 (매개변수에 const가 붙으면 원본이 되는 데이터를 수정하지 않는다)
// 아니면 call_by_reference가 아니라 call_by_value로 불러와 값을 복사해 사용해도 된다. 예를 들어 단순히 값을 보여주는 기능의 함수를 만들거면 매개변수의 주소를 복사해올 필요없이 값을 복사해와 쓰고
// 다 쓰고나면 메모리가 해제되게 하는 call_by_value를 사용해도 된다. 반면에 값을 변경해야 한다면 매개변수를 포인터(주소)로 받아서 함수를 선언하고 실제로 함수를 사용할때 &(참조)의 형식으로 받아와서 쓰면된다.
// 이렇게 되면 매개변수로 받을 대상의 메모리 공간을 공유하는 것이 되기 때문에 (예를들어 값을 변경하는 함수를 통과했다고 치면) 값이 변경되었을 때 인수의 주소에 저장되어 있는 데이터도 바뀐다. (call_by_reference)
// 포인터 형식으로 받을 때 값을 변경하고 싶지 않다면 앞서 말했듯이 매개변수에 const를 붙여주면 된다.

// 프로그램 설계할 때 
// 1) 필요한 기능이 무엇이 있는가(함수), 해당 기능이 누구를 대상으로 하는가(매개변수)
// 2) 함수로 행하려는 것이 무엇인가? 값을 반환하는 건가? 값을 변경하는 건가? (이에 따라 함수의 반환형이 바뀐다 - 반환이 목적이면 int나 double, 문자열일 것이고 / 값의 변경이면 void로 반환하면 된다.)
// 3) 본문에서 진행될 내용의 흐름을 수도코드로 작성하고 이걸로 코드를 작성, 필요한 함수를 정의, 필요한 헤더를 고민한다.



/*
// 07-08a.cpp   숫자 배열을 선언하고 계절별 비용을 입력받아 배열에 '입력'하고 각 계절별 비용과 총비용을 '출력'하는 프로그램을 각각 작성하시오.   (a버전에서는 값으로 접근)
// 필요한 것 -> 계절을 가리키는 문자열 포인터 배열(값 고정),   각 계절별 비용을 저장할 숫자 배열.  
// 입력함수, 출력함수 구현 (변경 대상 - 값을 저장할 숫자배열, 출력은 변경할 필요 없음)
#include <iostream>
#include <string>
#include <array>
using namespace std;

const int Seasons = 4;
const char* season[Seasons] = { "Spring", "Summer", "Authum", "Winter" };     // 지역변수로 먼저 선언
void fill(double pa[]);
void show(const double da[]);       // 보여주는 건 값을 변경할 필요가 없으니 const


int main() {
    double expense[4];      // 비용을 입력할 double 배열 생성
    fill(expense);
    show(expense);
    return 0;
}

void fill(double pa[]) {
    for (int i = 0; i < Seasons; i++) {
        cout << season[i] << "에 드는 비용: ";
        cin >> pa[i];
    }
}

void show(const double da[]) {
    double total = 0.0;
    for (int i = 0; i < Seasons; i++) {
        cout << season[i] << " 비용: " << da[i] << endl;
        total += da[i];
    }
    cout << "총비용: " << total << endl;
}
*/


// int나 double 같은 숫자형 배열은 int arr[10]; double arr[20]; 이런식으로 받는다. 
// 문자열의 경우 배열로 받거나 포인터로 받을 수 있는데  char str[] = "Hello"; 이런식으로 배열로 받는 경우는 값을 정한 후 바꿀 수 없다.
// 반면 const char* str = "Hello";  이렇게 포인터로 저장할 수도 있는데 이럴 경우 문자열 포인터 str은 문자열 Hello의 첫 문자 H의 주소를 가리킨다.
// 따라서 위와같이 포인터 str을 선언해두고   str = "Goodbye";를 선언하면 포인터가 Goodbye의 첫 문자의 주소값을 가리키게 된다. (변경이 가능하다)


/*
// 07-08b.cpp       07-08a랑 문제 내용은 같음. 비용 저장할 숫자 배열을 구조체 안에 넣고 포인터로 접근해서 수정하는 방식으로 구현해보시오.
// 필요한거 -> 비용 담을 double array를 담을 구조체.  계절 문자열 배열,  show함수(const), fill함수
#include <iostream>
#include <string>
#include <array>
using namespace std;

const int Seasons = 4;
const char* season[Seasons] = { "Spring", "Summer", "Authum", "Winter" };
struct expenses {                   // 구조체 선언
    double expense[Seasons];
};
void fill(struct expenses* da);   // 값을 변경할 거니 포인터로 접근
void show(struct expenses pa);    // 변경할 필요 없으니 구조체 객체로 매개변수.

int main() {
    expenses exp = {};  // 구조체로 그대로 생성;
    fill(&exp);     // 참조자로 인수설정 -> exp 구조체와 같은 주소값을 공유 -> fill 함수를 통해 변경된 값이 exp 구조체에 반영됨.
    show(exp);
    return 0;
}


void fill(struct expenses* da) {
    for (int i = 0; i < Seasons; i++) {
        cout << season[i] << "에 드는 비용: ";
        cin >> da->expense[i];
    }
}

void show(struct expenses pa) {
    double total = 0.0;
    for (int i = 0; i < Seasons; i++) {
        cout << season[i] << " 비용: " << pa.expense[i] << endl;
        total += pa.expense[i];
    }
}
*/


/*
// pe07-09.cpp   ***    // 객체, 포인터별로 결과출력하는거 배우기에 좋은 문제
#include <iostream>
#include <string>
using namespace std;

struct student {
    string fullname;
    string hobby;
    int ooplevel;
};

// getinfo()는 두 개의 전달인자를 취한다. 하나는 student 구조체
// 배열의 첫 번째 원소를 지시하는 포인터이고, 다른 하나는
// 그 배열의 원소 수를 나타내는 int 값이다. 이 함수는 학생들과 
// 관련된 데이터를 요구하여 배열에 저장하고, 배열이 다 찼거나
// 학생 이름에 빈 줄이 입력되면 종료된다. 이 함수는 배열의 
// 실제로 채워진 원소 수를 리턴한다.
int getinfo(student pa[], int n);

void display1(student st);              // 객체의 복사본을 인자로 받는거라 const 필요없음 (변경되도 원본에 손상이 가는게 아니니까)
void display2(const student* ps);       // 주소값을 공유하는 것이니 바뀌면 안됨
void display3(const student pa[], int n);

int main() {
    cout << "학급의 학생의 수를 입력하세요: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')           // 버퍼가 비어있는지 확인 (비어있으면 아래 코드 계속 실행)
        continue;
    
    student* ptr_stu = new student[class_size];     // 메모리 동적할당
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
        cout << endl;
    }
    display3(ptr_stu, entered);
    cout << "프로그램을 종료합니다." << endl;
    return 0;
}



int getinfo(student pa[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        cout << "이름: ";
        cin >> pa[i].fullname;
        if (pa[i].fullname == "")         //string은 ==로 비교가능
            break;
        cout << "취미: ";
        cin >> pa[i].hobby;
        cout << "등급: ";
        (cin >> pa[i].ooplevel).get();
        count++;
    }
    cout << endl;
    return count;
}

void display1(student st) {
    cout << "이름: " << st.fullname << endl;
    cout << "취미: " << st.hobby << endl;
    cout << "등급: " << st.ooplevel << endl;
}

void display2(const student* ps) {
    cout << "이름: " << ps->fullname << endl;
    cout << "취미: " << ps->hobby << endl;
    cout << "등급: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 학생" << endl;
        cout << "이름: " << pa[i].fullname << endl;
        cout << "취미: " << pa[i].hobby << endl;
        cout << "등급: " << pa[i].ooplevel << endl;
        cout << endl;
    }
}
*/


/*
// pe07-10.cpp      // calculate() 함수 하나로 더하기, 빼기, 곱하기, 나누기를 한꺼번에 출력하는 계산기 프로그램을 짜보시오. (함수포인터)
#include <iostream>
using namespace std;


double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);                                               // 함수 4개 모두 인자가 같으니 아래 함수포인터에서 (double, double)이 가능했지. 템플릿으로 사용할 때 자료형 정의하는 것도 생각해보셈
double calculate(double x, double y, double (*pf)(double, double));         // 3번째 인자는 함수포인터.   // 반환타입 (함수포인터이름)(인자 자료형) = 할당할 함수;   이렇게 사용하면 됨.

int main() {
    double (*pf[4]) (double, double) = { add, sub, mul, div };                // 함수포인터 pf에 add, sub, mul, div 함수 할당
    double x, y;
    double array[4];                                                          // 계산한 결과를 저장할 array

    cout << "x와 y를 입력하세요(끝내려면 q를 입력하세요): ";
    while (cin >> x && cin >> y) {
        for (int i = 0; i < 4; i++)
            array[i] = calculate(x, y, pf[i]);

        cout << "x + y = " << array[0] << endl;
        cout << "x - y = " << array[1] << endl;
        cout << "x * y = " << array[2] << endl;
        cout << "x / y = " << array[3] << endl;
        cout << endl;

        cout << "x와 y를 입력하세요(끝내려면 q를 입력): ";
    }
    return 0;
}


double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    return x / y;
}

double calculate(double x, double y, double (*pf)(double, double)) {
    return (pf(x, y));
}
*/


/*
// pe08-01.cpp          // 출력할 메시지를 입력받고 실행회수만큼 해당 메시지를 출력하는 프로그램을 짜보시오.
#include <iostream>
#include <string>
using namespace std;
void print_str(char* str, int count = 0);
const int array_size = 20;

int main() {
    char my_str[array_size];

    cout << "출력할 메시지를 입력하시오: " << endl;
    cin.getline(my_str, array_size);

    print_str(my_str);
    print_str(my_str, 0);
    print_str(my_str, 10);

    for (int i = 0; i < 3; i++) {
        print_str(my_str);
    }

    return 0;
}

void print_str(char* str, int count) {
    static int called = 0;      // static int로 안써주고 int로 쓰면 전부다 1로 나오네.  static으로 선언하면 프로그램이 시작될때 할당, 끝날때 파괴됨. 그래서 return이나 변수에 저장하는 과정이 없어도 변경된 값이 저장됨

    if (count == 0) {       // count가 0일때 한번만 출력
        called++;
        cout << called << "번째 호출" << str << endl;
    }
    else {
        called++;
        for (int i = 0; i < called; i++)
            cout << called << "번째 호출" << str << endl;
    }
        
}
*/

/*
// pe08-02.cpp      // 구조체를 선언하고 해당 구조체의 데이터를 수정하는 함수, 출력하는 함수를 각각 만드시오. 
#include <iostream>
#include <string>
using namespace std;

struct My_car {
    string name;
    string maker;
    int price;
};

void Set(My_car& car, string new_name = "Boxster 718", string new_maker = "porsche", int new_price = 500);      // 디폴트 선언. 실제로 사용할때 인자를 비워두면 디폴트 인자로 채워진다.
void Show(const My_car& car);


int main() {
    My_car car1;
    Set(car1);
    Show(car1);
    Set(car1, "bentz S");
    Show(car1);
    Set(car1, "Perari Spider", "Perari");
    Show(car1);
    Set(car1, "golf", "volkswagen", 300);
    Show(car1);

    return 0;
}


void Set(My_car& car, string new_name, string new_maker, int new_price) {
    car.name = new_name;
    car.maker = new_maker;
    car.price = new_price;
}

void Show(const My_car& car) {
    cout << "차 이름: " << car.name << endl;
    cout << "제조사: " << car.maker << endl;
    cout << "가격: " << car.price << endl;
    cout << endl;
}
*/

/*
// pe08-03.cpp -- 문자열을 대문자로 변환한다
// \0은 문자열의 끝을 의미한다.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    string str;

    while (1) {
        cout << "문자열을 입력하세요(끝내려면 q를 입력하세요): ";
        getline(cin, str);
        if (str.size() == 1 && str[0] == 'q')
            break;
        for (int i = 0; str[i] != '\0'; i++)
            cout << char(toupper(str[i]));      // char로 형변환 해줘야지 안해주면 대문자로 변환된 글자에 대한 아스키코드가 뽑힌다.
        cout << endl;
    }

    return 0;
}
*/

/*
// pe08-04.cpp     ***
// 문자열의 내용과 길이를 저장할 구조체를 선언하고 새로운 값을 지정하는 함수, 그리고 저장된 값을 보여주는 함수를 만드시오.
// 필요한것 - 구조체, 새로운 값을 지정하는 동적할당(strlen, strcpy), 저장된 값을 보여주는 함수(인라인으로 선언)

#include <iostream>
#include <cstring>      // strlen이랑 strcpy 사용
using namespace std;

struct stringy {
    char* str;      // 저장할 문자열
    int lenght;     // 문자열의 길이
};

inline void show(stringy& bean) { cout << bean.str << endl; }       // show 함수 오버로딩 됨.
inline void show(const char string[]) { cout << string << endl; }
void set(stringy& bean, const char string[]);                       // string[] 배열로 bean을 변경

int main() {
    stringy beany;
    char test[] = "Reality isn't what it used to be.";

    set(beany, test);

    show(beany);
    test[0] = 'D';
    test[1] = 'U';
    show(test);
    show("Done");
    return 0;
}


void set(stringy& bean, const char string[]) {
    char* ps = new char[strlen(string) + 1];    // 새로운 메모리 공간 할당
    bean.str = ps;                                  // 기존에 문자열을 가리키던 포인터 str이 새롭게 생성된 메모리 공간을 가리킴
    strcpy_s(ps, strlen(string) + 1, string);           // 새로 생성된 메모리공간에 문자열 삽입 
    bean.lenght = strlen(bean.str);
}
*/

/*
// 다시 한번
// 문장의 내용, 문장의 길이를 저장하는 기존 구조체의 내용을 바꾸는 함수, 보여주는 함수를 만들어 내용물을 바꾸고 보여주세요.
// 필요한거 -> 1) 기존에 정보를 저장한 구조체. 2) set함수, show함수. 3) 문자열이니까 동적할당. 배열로 받는 식으로.  4) 함수 오버로딩(show 함수 2개로 나눠서 - 구조체의 참조자일때, 문자열일때.)

#include <iostream>
#include <cstring>      // strcpy_s, strlen 사용
using namespace std;

struct sentence {
    char* detail;
    int length;
};

inline void show(sentence& ref) { cout << "내용: " << ref.detail << endl; }      // 인라인 함수 오버로딩
inline void show(const char str[]) { cout << "내용: " << str << endl; }
inline void set(sentence& ref, const char str[]);


int main() {
    sentence sample;
    char copy[] = "Do not chose a easy way. Easy come easy go. Hard moment soon become your power.";

    set(sample, copy);
    
    show(copy);
    show(sample.detail);

    copy[0] = 'd';
    copy[1] = 's';
    show(copy);
    return 0;
}


void set(sentence& ref, const char str[]) {
    char* ps = new char[strlen(str)+1];                                    // 메모리 공간 할당     // 맨뒤에 null 자리 까먹지마라
    ref.detail = ps;                                                         // 기존에 구조체 포인터로 새로 할당한 메모리 공간에 연결
    strcpy_s(ps, strlen(str)+1, str);         // 메모리 공간에 저장할 문자 입력
    ref.length = strlen(ref.detail);                                    // 구조체 참조자 길이도 수정
}


// 함수 호출의 과정
// 스택에 함수에 전달할 매개변수, 호출이 끝나고 돌아갈 주소값을 저장.
// 프로그램 제어가 함수의 위치로 넘어와 함수 내에 선언된 지역 변수도 저장
// 함수가 코드 실행.실행 끝내면 반환
// 반환 주소로 이동.스택에 저장된 함수 호출 정보 제거.

// 인라인 함수
// 함수 호출 과정은 위와 같이 복잡함.함수 실행시간이 길면 상관 없는데 엄청 짧으면 함수 실행시간보다 호출 시간이 더 걸림. (오버헤드)배보다 배꼽이 큰 상황
// 이렇게 함수 내용 코드가 짧을 때 시간을 절약하려고 사용하는 것이 인라인 함수.함수의 모든 코드를 호출된 자리에 바로 삽입.
*/


/*
// pe08-05.cpp
// 최대값을 찾는 프로그램을 짜보시오. 템플릿을 이용해서 자료형에 상관없이 하나의 함수로 해결하시오.
// 필요한 것 - Max함수 (템플릿으로). 숫자들을 저장할 배열 (이건 지역변수로)
#include <iostream>
using namespace std;

template <typename T>
T Max(T arr[], int count);

int main() {
    int ints[5] = { 1, 2, 3, 4, 5 };
    double doubles[5] = { 2.0, 33.0, 35.5, 17.9, 9.6 };
    cout << "ints 배열에서 최댓값은 " << Max(ints, 5) << endl;
    cout << "doubles 배열에서 최댓값은 " << Max(doubles, 5) << endl;
    return 0;
}

template <typename T>
T Max(T arr[], int count) {         // 배열을 순회하면서 최대값을 찾음
    T Max = arr[0];
    for (int i = 0; i < count; i++) {
        if (arr[i] > Max)
            Max = arr[i];
    }
    return Max;
}
*/

/*
// pe08-06.cpp      // template specialization
// 08-05번 같이 템플릿으로 최댓값을 구하는 함수를 만드시오. 단, 문자열에 대해선 템플릿 특수화를 통해 작성하시오. (문장의 길이가 더 긴걸 출력하도록)
#include <iostream>
using namespace std;

template <typename T>
T Max(T arr[], int count);

template <> char* Max(char* pstr[], int count);     // 템플릿 특수화

int main() {
    int ints[5] = { 3, 5, 1, 50, 20 };
    double doubles[5] = { 3.5, 5.7, 70.0, 60.7, 3.2 };
    const char* pstr[5] = {
        "This is a sample",
        "Hi Hello.",
        "Come on",
        "Learning C++ is interesting.",
        "Want to go home."
    };
    cout << "가장 큰 int값: " << Max(ints, 5) << endl;
    cout << "가장 큰 double값: " << Max(doubles, 5) << endl;
    cout << "가장 큰 char값: " << Max(pstr, 5) << endl;
    return 0;
}


template <typename T>
T Max(T arr[], int count) {
    T Max = arr[0];
    for (int i = 0; i < count; i++) {
        if (arr[i] > Max)
            Max = arr[i];
    }
    return Max;
}

template <> char* Max(char* pstr[], int count) {            // Max를 만들어서 반환하는거기 때문에 const로 선언할 필요없음
    char* Max = pstr[0];
    for (int i = 1; i < count; i++) {
        if (strlen(pstr[i]) > strlen(Max))
            Max = pstr[i];
    }
    return Max;
}
*/


/*
// pe08-07.cpp
// 템플릿 특수화로 고객들 빛의 합, 재산의 합을 구하시오. (재산의 합은 배열로 만들고)
// 필요한 거 - 템플릿 특수화 함수 2개, 재산저장 배열, 빚 저장 배열 (기존 구조체의 주소값으로 저장)

#include <iostream>
#include <string>
using namespace std;

struct debt {
    string name;
    double amount;
};

template <typename T>
int show(T arr[], int n);

template <typename T>
double show(T* arr[], int n);


int main() {
    int wealth[6] = { 10, 50, 67, 72, 36, 89 };
    struct debt Debt_List[5] = {                    // 보니까 구조체로 선언하면 숫자의 기본은 double로 되나보다.
        {"Jake", 100},
        {"Pin", 120},
        {"Hun", 300},
        {"Spidy", 700},
        {"Yamato", 400}
    };
    double* collect[5];                             // 주소값을 저장할 배열 collect

    for (int i = 0; i < 5; i++) {
        collect[i] = &Debt_List[i].amount;
    }

    cout << "고객 재산 총합은 " << show(wealth, 6) << "원 입니다.\n";
    cout << "고객 빚 총합은 " << show(collect, 5);

}


template <typename T>
int show(T arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

template <typename T>
double show(T* arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += *arr[i];           // 배열에 주소값이 저장되어 있으니까 *로 값을 추출
    return total;
}
*/

/*
// pe09-02.cpp -- Listing 9.8을 string 객체를 사용해서 변환한다
// 문장을 입력받고 문장에 포함된 글자의 개수를 구하는 프로그램을 짜보시오. (static 변수에 대한 이해 필요(스택과 힙 메모리))
// 필요한거 - 글자의 개수 구해야하는 거니까 글자개수는 계속 업데이트 해줘야되

#include <iostream>
#include <string>
using namespace std;

void countch(const string st);

int main() {
    string str;
    
    cout << "문장을 입력해주세요.(끝내려면 빈행을 입력): \n";

    while (1) {
        // 문장의 입력
        getline(cin, str);      // 문장 입력받음
        if (str[0] == '\0')     // 문장이 비어있으면 break
            break;
        countch(str);           // 글자수 업데이트 및 출력
        cout << "다음 문장을 입력해주세요. (끝내려면 빈행을 입력): \n";
    }

    cout << "프로그램 종료" << endl;
    return 0;
}

void countch(const string st) {
    static int total = 0;              // 여기서 total을 int total로 하면 문장입력 될때마다 total이 리셋되서 이전에 입력된게 계산이 안됨.
    int count;

    for (count = 0; st[count] != '\0'; count++);      // count 글자수만 세주면 되니까

    total += count;
    cout << "이번 문장에는 " << count << "개의 문자가 있습니다.\n";
    cout << "지금까지 글자수 총 " << total << "개\n";
}

// int total로 선언하면 메모리에 stack으로 저장이 된다. 그래서 countch(str)을 실행할때 total이랑 count가 계산이 되지만 해당 함수가 끝났을 때 스택에서 해제가 된다.
// 그래서 메모리 상에 total에 대한 정보가 남아있지 않아서 이전 total 정보가 반영이 안되는 거다. 
// 그래서 static 선언을 해줘서 total을 힙 메모리에 올리는 것 (힙 메모리에 올라가면 프로그램이 끝날때까지 유지가 되니까)
*/


/*
// pe09-03.cpp -- 위치 지정 new 사용하기
#include <iostream>
#include <cstring>
#include <new>
using namespace std;

struct chaff {
    char dross[20];
    int slag;
};

// char buffer[500];    // 옵션1
int main() {
    chaff* p1;
    int i;
    char* buffer = new char[500];   // 옵션2
    p1 = new (buffer) chaff[2];     // 구조체들을 buffer에 넣는다.
    strcpy_s(p1[0].dross, 20 ,"Horse Feathers");
    p1[0].slag = 13;
    strcpy_s(p1[1].dross, 20 ,"Piffle");
    p1[1].slag = 10;

    for (int i = 0; i < 2; i++)
        cout << p1[i].dross << ": " << p1[i].slag << endl;
    delete [] buffer;       // 옵션2

    return 0;
}
*/

