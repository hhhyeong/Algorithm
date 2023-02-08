#include<iostream>

using namespace std;

int main() {
    int A, B;
    
    // 프로그램종료 조건 : 입력이 없을 경우 ??
    while(1) {
        cin >> A >> B;
        if (cin.eof() == true) {
            break;
        }
        cout << A+B << endl;
    }
}