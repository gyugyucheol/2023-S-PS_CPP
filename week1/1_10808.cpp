#include <bits/stdc++.h>

using namespace std;
// typedef long long ll; 

int main(){
    //초기 선언
    int a[26] = {0,}; // 알파벳 개수를 저장할 배열 선언 {0,}하면 배열 전체를 0을 선언한다.
    string input;

    // 문자를 받아서 해체, a배열에 저장
    cin >> input;
    for (char input_char : input)    {
        a[input_char - 'a']++; // input을 분해해서 하나씩 확인하며 input_char에 넣고 a[input_char - 'a']를 1씩 증가시킨다.
    }

    // 출력하기
    for(int i = 0; i < 26; i++){
        cout << a[i] << endl;
    }
    return 0;
}