#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    int N;
    int sum = 0;
    
    cin >> N;
    // int arr[N];
    cin >> str;

    for(int i=0; i<N; i++) {
        
        // 이건머야..? Python 문법인가?
        // sum += int(str[i]);

        // string to integer
        // sum += stoi(str[i]);

        // char to integer
        sum += (str[i] - '0');
    }
    cout << sum;
}