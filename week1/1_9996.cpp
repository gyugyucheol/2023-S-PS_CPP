#include <bits/stdc++.h>
using namespace std;

int main(){
    int file_cnt = 0;
    string pattern = "", temp = "";
    char start = '0', end = '0';

    cin >> file_cnt >> pattern;
    start = pattern[0];
    end = pattern[pattern.length() - 1];

    for(int i = 0; i < file_cnt; i++){
        cin >> temp;
        if (temp[0] == start && temp[temp.length() - 1] == end)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }
    return 0;
}

