// OOP는 캡슐화, 추상화, 상속, 다형성이 핵심이다. 캡슐화는 비슷한 기능끼리 묶는 것과 정보은닉에 초점을 맞추고 있다. 다른 사용자나 클래스가 정해지지 않은 접근방식으로 접근하는 것을 막는다. 
// 예를 들어 클래스의 멤버변수를 private으로 선언하고 public의 멤버함수를 통해서만 이것에 접근하게 한다. 이렇게 하면 데이터의 수정과 같은 기능의 권한을 제한하고 데이터가 마구잡이로 바뀌는 것을 막을 수 있다.
// 두번째로 추상화는 어려운 걸 간단하게 만들어서 쓰자는 말이다. 핸드폰의 터치를 생각해봐도 우리(사용자)의 입장에서는 단순한 터치 한번이지만 그 내부의 작동 메커니즘은 훨씬 복잡하다.
// 하지만 그런 복잡한 작동원리를 그대로 쓰게 한다면 누구도 사용을 안할 것이다. 복잡한 기능을 '버튼' 하나 같이 간단하게 쓸 수 있게 만드는 것이 추상화이다. 예를 들어서 추상클래스의 가상함수를 생각해보자
// 맨 상위 클래스에서 가상함수로 함수를 선언하고 하위 클래스에서 상속받아서 함수를 다시 선언하면 함수 이름만으로 함수를 사용하는 것이 가능하다. 그리고 이 부분에 다형성이 사용되면 훨씬 편하게 사용할 수 있다.
// 다형성이라는 건 이름은 같은데 다른 모습을 하고 있다는 말인데, (그리스에서 기반됐다고 하는 거 보면 제우스가 여러 동물이나 사람 등으로 변신해서 나타났다는 거에서 어원을 딴거려나? 아무튼) 어쨌든 같은 이름의 함수라도
// 다른 기능을 가진단 말이다? 가상함수 work를 가지고 있는 employee 상위 클래스를 engineer, doctor, teacher 클래스가 상속하고 eng, doc, teach가 각각 고유의 work 함수를 가지고 있다 생각해보자.
// employee의 객치 emp1, engineer의 객체 eng1, doctor의 객체 doc1, teacher의 객체 teach1을 만들어 주고 emp1.work(); eng1.work(); doc1.work(); teach1.work()를 해주면 각각에 선언된 work 함수들이 다른 형태로 나올 것이다!
// 함수의 이름은 같은데 말이다! 만약 상속관계로 선언되어 있는데 오버라이딩을 안해줬다면 상위클래스의 내용을 그대로 가져오겠지만 말이다.
// 또 다형성을 생각하면 가장 상위 클래스에 해당하는 employee 클래스로 employee* e1 = eng1;   employee* e2 = doc1;    이런식으로 선언하면 e1 -> work(); 이렇게 간단하게 실행하는 것이 가능하다.
// doc1.work(); eng1.work(); 이런식으로 일일히 치는 대신에 말이다. 근데 그럼 무식한 방법이어도 그냥 쳐서 해도 되는 거 아니냐 싶을 수도 있겠다. 하지만 employee를 상속받는 클래스가 수백, 수천개나 된다고 생각해보라.
// 객체 이름을 전부다 적어가며 실행해주는 것보다 최상위 클래스 포인터 하나로 관리하는게 더 편하지 않겠는가? 그래서 다형성이 좋은 것이다.
// 사족으로 객체지향이라는 것이 프로그래밍을 하는데 있어서의 절대적인 법칙이라기 보다는 그냥 프로그램을 짜면서 좀 더 편하게 만들고 관리할 수 있는 방법이 없나 고민하면서 수정한 결과물이 알고보니 객체지향의 특성과 
// 유사하다고 생각하는 것이 맞는 거 같다. 코드의 재활용 가능성이니 뭐니 하는거는 다 부차적인 요소고 객체지향을 쓰게 된 이유가 무엇이었을까 고민해보니 오히려 이해가 더 쉬웠던 것 같다.

#include <iostream>
using namespace std;

// 추상화.. 근데 이걸 한 이유가 무엇이지? 아래 employee에 Ask함수 선언하고 그냥 쓰면 안되나? -> 다형성을 쓰면 훨씬 편해서
// AbstractEmployee *a1 = emp1;  이렇게 해주면 a1 -> AskForPromotion  이렇게 훨씬 편하게 쓸 수가 있지.
class AbstractEmployee {
    void virtual AskForPromotion()=0;
};

class employee:AbstractEmployee {
private:
    
    string Company;
    int Age;
protected:
    string Name;

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age > 20)
        Age = age;
    }
    int getAge() {
        return Age;
    }
    void AskForPromotion() {
        if (Age > 30) {
            cout << Name << " got promoted." << endl;
        }
        else {
            cout << Name << " sorry, you are not promoted." << endl;
        }
    }
    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    virtual void Work() {
        cout << Name << " is Checking email" << endl;
    }


    // 요렇게 생성자로 만들어버려. 그러면  (생성자 핵심은 반환타입이 없고. 클래스랑 이름이 같아야하고, public에 선언되야한다)
    employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

class Developer : public employee {     // public으로 접근 허용
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) :employee(name, company, age) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug() {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    /*void Work() {
        cout << Name << " is writing " << FavProgrammingLanguage << " code." << endl;
    }*/
};

class Teacher : public employee {
public:
    string Subject;
    void PrepareLesoon() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject) :employee(name, company, age) {
        Subject = subject;
    }
    void Work() {
        cout << Name << " is teaching " << Subject << " to student." << endl;
    }
};

int main()
{
    /*
    employee emp1 = employee("June", "Student", 28);    // 훨씬 간단해지지? 그리고 단순히 간단해지는 것만이 아니라 정보의 생성 권한에 제한을 둘 수 있게되지.
    emp1.AskForPromotion();
    employee emp2 = employee("Lee", "Programmer", 32);
    emp2.AskForPromotion();
    */

    Developer dev = Developer("Seong", "C++ guru", 35, "C++");  // 자 여기서 질문. dev 객체가 자기소개 할때 FavProgrammingLanguage까지 써서 소개하게 하려면 어떻게 해야할까? -> vitual로 선언하고 여기서 바꿔야겠지
    Teacher t = Teacher("Gyu", "school", 38, "math");
    
    employee* e1 = &dev;
    employee* e2 = &t;

    e1->Work();     // 이거 때문에 Work함수가 virtual로 선언이 되야하네. 그냥 함수로 선언하면 employee 포인터로 work를 실행한다해도 어떤 work를 실행해야하는지에 대한 그게 없잖아.
    e2->Work();
    
    /*
    dev.FixBug();
    dev.AskForPromotion();
    dev.Work();
    */
    
    /*
    t.PrepareLesoon();
    t.AskForPromotion();
    t.Work();
    */

    /*
    emp1.Name = "june";
    emp1.Company = "Student";
    emp1.Age = 28;                  // 근데 이렇게 할때마다 클래스 멤버변수들 초기화해주기 귀찮잖아?
    */
    

    //cout << emp1.Name << " is " << emp1.Age << " years old and his job is " << emp1.Company;    // 근데 이렇게 쓸때마다 써주는 건 귀찮지? 그러니까 함수로 만들어서
}


// 만들어보자