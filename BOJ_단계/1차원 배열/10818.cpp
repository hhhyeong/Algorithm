#include<iostream>

using namespace std;

int main() {
    int N;
    int num;
    int max_n = -1000000;
    int min_n = 1000000;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num >= max_n)
            max_n = num;
        if (num <= min_n)
            min_n = num;
    }

    cout << min_n << " " << max_n;

}