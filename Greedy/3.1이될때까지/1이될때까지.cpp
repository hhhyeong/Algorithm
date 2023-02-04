#include<iostream>

using namespace std;

int main()
{
    int n, k;
    int result = 0;
    int target;
    
    cin >> n >> k;

    while(true) {
        target = (n / k) * k;
        result += (n - target);
        n = target;
        if (n < k) break;
        result++;
        n /= k;
    }

    result += (n-1);
    cout << result << '\n';
}