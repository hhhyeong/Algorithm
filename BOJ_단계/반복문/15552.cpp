#include<iostream>

using namespace std;

int main() {
    int T;
    int A,B;
    cin.tie(NULL);
    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> A >> B;
        cout << A + B << "\n";
    }
}