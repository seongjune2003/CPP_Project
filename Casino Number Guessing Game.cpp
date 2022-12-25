#include <iostream>
#include <string>   // Needed to use strings
#include <cstdlib>  // Needed to use random numbers
#include <ctime>
using namespace std;
void rules();


int main()
{
    string playerName;
    int balance;    // stores player's balance
    int bettingAmount;
    int guess;
    int dice;       // stores the random number
    char choice;
    srand(time(0)); // "Seed" the random generator  // 1. time을 시드로 가지고 있는 srand 함수를 부르고 2. rand() 함수를 이용해서 완벽하게 랜덤한 값을 가지고 오고 3. 그 랜덤한 값을 % n으로 나머지를 구해서 0~n-1까지 범위의 랜덤값을 얻음
    cout << "\n\t\t=======WELCOME TO CASINO WORLD=======\n\n";
    cout << "\n\nWhat's your Name : ";
    getline(cin, playerName);
    cout << "\n\nEnter the starting balance to play game : $";
    cin >> balance;
    do {
        system("cls");  // 화면 글 지움
        rules();
        cout << "\n\nYour current balance is $ " << balance << "\n";
        
        // Get Player's betting balance;
        do {
            cout << "Hey, " << playerName << ", enter amount to bet: $";
            cin >> bettingAmount;
            if (bettingAmount > balance)
                cout << "Betting balance can't be more than current balance!\n" << "\nRe-enter balance\n";
            }while (bettingAmount > balance);
        
            // Get's Player's Number
            do {
                cout << "Guess any betting number between 1 & 10 :";
                cin >> guess;
                if (guess > 10 || guess <= 0)
                    cout << "\nNumber should be between 1 to 10\n" << "Re - enter number : \n";
            } while (guess > 10 || guess <= 0);
            dice = rand() % 10 + 1;
            if (dice == guess) {
                cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
                balance = balance + bettingAmount * 10;
            }
            else {
                cout << "Oops, better luck next time !! You lost $ " << bettingAmount << endl;
                balance = balance - bettingAmount;
            }
            // 한판이 끝남
            cout << "\nThe winning number was : " << dice << "\n";
            cout << "\n" << playerName << ", you have balance of $ " << balance << "\n";
            if (balance == 0) {
                cout << "You have no money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');       // 첫번째 do - while문 닫는 위치
        cout << "\n\n\n";
        cout << "\n\nThanks for playing the game. Your balacne is $ " << balance << "\n\n";
        return 0;
}

void rules() {
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!=======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}