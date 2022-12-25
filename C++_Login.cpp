#include <iostream>     // cin 사용
#include <fstream>      // 입출력 ifstream, ofstream 사용
#include <string>

using namespace std;

bool IsLoggedIn() {
    string username, password, un, pw;

    cout << "Enter username: "; cin >> username;
    cout << "Enter password: "; cin >> password;

    ifstream read(username + ".txt");        // ifstream은 파일을 읽음
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password) {
        return true;
    }
    else {
        return false;
    }
}



int main()
{
    int choice;

    cout << "1: Register\n2: Login\nYour choice: "; cin >> choice;
    if (choice == 1) {
        string username, password;

        cout << "select a username: "; cin >> username;
        cout << "select a password: "; cin >> password;

        ofstream file;      // ofstream은 파일을 만듬
        file.open(username + ".txt");                   // 저장할 경로설정 및 파일 열기
        file << username << endl << password;           // 파일에 입력
        file.close();                                   // 파일 닫음

        main();      // main()을 해줘서 다시 로그인할지 회원가입할지 결정 가능
    }
    else if (choice == 2) {
        bool status = IsLoggedIn();

        if (!status) {
            cout << "False Login!" << endl;
            system("PAUSE");
            return 0;
        }
        else {
            cout << "Succesfully logged in!" << endl;
            system("PAUSE");
            return 1;
        }
    }
}

