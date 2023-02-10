#include<iostream>

using namespace std;

int main() {
    int m_num = -1;
    int m_index;
    int arr[9];


    for (int i=0; i<9; i++) {
        cin >> arr[i];
        if (m_num <= arr[i]){
            m_num = arr[i];
            m_index = i;
        }
    }
    cout << m_num << endl;
    cout << m_index+1;

}