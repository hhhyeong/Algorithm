#include<iostream>

using namespace std;

int main() {
    int A, B;
    int min;
    
    int plus_H;
    
    cin >> A >> B;
    cin >> min;

    B = B + min;
    plus_H = B / 60;
    B = B % 60;
    A = A + plus_H;
    if (A >= 24) {
        A = A - 24;
    }

    cout << A << " " << B;

}