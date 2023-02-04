// #include <bits/stdc++.h>
#include<stdio.h>
#include <iostream>

using namespace std;

int main() {
    string data;
    int num;
    int result = 0;

    cin >> data;

    for (int i = 0; i < data.length(); i++){
        num = data[i] - '0';
        if (num == 0 || num == 1 || result == 0){
            result += num;
        } else {
            result *= num;
        }
    }
    cout << result << endl;
}