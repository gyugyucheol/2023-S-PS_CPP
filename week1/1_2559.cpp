#include <bits/stdc++.h>
using namespace std;

int main() {
    short num = 0, constNum = 0;
    cin >> num >> constNum;

    short arr[num] = {0,};
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    short temp[num - constNum] = {0,};
    for (int i = 0; i < num - constNum; i++) {
        for (int j = i; j < i + constNum; j++) {
            temp[i] += arr[j];
        }
    }

    sort(temp, temp + num - constNum);
    cout << temp[num - constNum - 1] << endl;
}