/* Problem Statement :

A book shop maintains the inventory of books that are being sold at the shop.The list
includes details such as author, title, price, publisherand stock position.Whenever a
customer wants a book, the sales person inputs the titleand authorand the system
searches the listand displays whether it is available or not.If it is not, an appropriate
message is displayed.If it is, then the system displays the book detailsand requests
for the number of copies required.If the requested copies book detailsand requests
for the number of copies required.If the requested copies are available, the total cost
of the requested copies is displayed; otherwise the message “Required copies not in
stock” is displayed.
Design a system using a class called books with suitable member functionsand
Constructors.Use new operator in constructors to allocate memory space required.
Implement C++ program for the system.
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace::std;

class book {
private:
    char* author, * title, * publisher;
    float* price;
    int* stock;
public:
    book() {
        author = new char[20];
        title = new char[20];
        publisher = new char[20];
        price = new float;
        stock = new int;
    }
    void feeddata();
    void editdata();
    void showdata();
    int search(char[], char[]);
    void buybook();
};

void book::feeddata() {
    cin.ignore();   // 버퍼에 있는 내용을 지움
    cout << "\nEnter Author Name: ";     cin.getline(author, 20);   // cin으로 입력받은 걸 author 포인터 배열에 20길이 한정으로 넣는다.
    cout << "Enter Title Name: ";       cin.getline(title, 20);
    cout << "Enter Publisher Name: ";   cin.getline(publisher, 20);
    cout << "Enter Price: ";            cin >> *price;
    cout << "Enter Stock Position: ";   cin >> *stock;
}

void book::editdata() {
    cout << "\nEnter Author Name: ";    cin.getline(author, 20);
    cout << "Enter Title Name: ";       cin.getline(title, 20);
    cout << "Enter Publisher Name: ";   cin.getline(publisher, 20);
    cout << "Enter Price: ";            cin >> *price;
    cout << "Enter Stock Position: ";   cin >> *stock;
}

void book::showdata() {
    cout << "\nAuthor Name: " << author;
    cout << "\nTitle Name: " << title;
    cout << "\nPublisher Name: " << publisher;
    cout << "\nPrice: " << *price;
    cout << "\nStock Position: " << *stock;
}

int book::search(char tbuy[20], char abuy[20]) {
    if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0)          // strcmp(char* A, char* B)  문자열 포인터 둘이 같으면 0, 다르면 음수 또는 양수 출력
        return 1;                                                       // return 0  정상출력   return 1  정상인데 뭔가 있음
    else return 0;
}

void book::buybook() {
    int count;
    cout << "\nEnter Number of Books to buy: ";
    cin >> count;
    if (count <= *stock) {
        *stock = *stock - count;
        cout << "\nBooks Bought Sucessfully";
        cout << "\nAmount: Rs, " << (*price) * count;
    }
    else
        cout << "\nRequired Copies not in Stock";
}



int main()
{
    book* B[20];    // book으로 이루어진 20개짜리 배열
    int i = 0, r, t, choice;
    char titlebuy[20], authorbuy[20];
    while (1) {
        cout << "\n\n\t\tMENU"
            << "\n1. Entry Of New Book"
            << "\n2. Buy Book"
            << "\n3. Search For Book"
            << "\n4. Edit Details Of Book"
            << "\n5. Exit"
            << "\n\nEnter your Choice";
        cin >> choice;

        switch (choice) {
        case 1: B[i] = new book;
            B[i]->feeddata();       // 새 책 등록
            i++;    break;          // 다음 i로 넘어감

        case 2: cin.ignore(); //버퍼 비워주고
            cout << "\nEnter Title Of Book: "; cin.getline(titlebuy, 20);
            cout << "Enter Author Of Book: "; cin.getline(authorbuy, 20);
            for (t = 0; t < i; t++) {
                if (B[t]->search(titlebuy, authorbuy))
                    B[t]->buybook();
                break;
            }
            if (t == 1)
                cout << "\nThis Book is Not in Stock";
            break;

        case 3: cin.ignore();
            cout << "\nEnter Title Of Book: ";  cin.getline(titlebuy, 20);
            cout << "Enter Author Of Book: ";   cin.getline(authorbuy, 20);

            for (t = 0; t < i; t++) {
                if (B[t]->search(titlebuy, authorbuy)) {
                    cout << "\nBook Found Successfully";
                    B[t]->showdata();
                    break;
                }
            }
            if (t == i)   // 끝까지 찾아봤는데 없다면
                cout << "\nThis Book is Not in Stock";
            break;

        case 4: cin.ignore();
            cout << "\nEnter Title Of Book: ";  cin.getline(titlebuy, 20);
            cout << "Enter Author Of Book: ";   cin.getline(authorbuy, 20);

            for (t = 0; t < i; t++) {
                if (B[t]->search(titlebuy, authorbuy))
                    cout << "\nBook Found Successfully";
                B[t]->editdata();
                break;
            }
            if (t == i)
                cout << "This Book is Not in Stock";
            break;

        case 5: exit(0);
        default: cout << "\nInvalid Choice Entered";

        }
    }

    return 0;
}

