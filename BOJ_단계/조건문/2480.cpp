#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int count = 1;
    int A, B, C;
    int same;
    int max_num = 0;

    cin >> A >> B >> C;

    if ((A == B) && (A != C)) {
        count = 2;
        same = A;
    } else if ((A == C) && (B != C)) {
        count = 2;
        same = A;
    } else if ((B == C) && (A != B)) {
        count = 2;
        same = B;
    } else if (A == C && A == B) {
        count = 3;
    }

    if (count == 3) {
        cout << 10000 + (A) * 1000;
    } else if (count == 2) {
        cout << 1000 + (same) * 100;
    } else {
        max_num = max(A,B);
        max_num = max(max_num,C);
        cout << max_num * 100;
    }
}