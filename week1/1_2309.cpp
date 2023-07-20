#include <bits/stdc++.h>

using namespace std;
int main(){

// 난쟁이 리스트 받기
    int a[9];
    for(int i = 0; i < 9; i++){
        cin >> a[i];
    }

// 난쟁이 정렬하기 
    sort(a, a+9); 

// 난쟁이 아닌애 2명 찾기
    do{
        int sum = 0;
        for(int i = 0; i < 7; i++){
            sum += a[i];
        }

        // if(sum == 100) {
        //     for(int i = 0; i < 7; i++){
        //         cout << a[i] << endl;
        //     }
        // }

        if(sum == 100) {
            for(int i = 0; i < 7; i++){
                cout << a[i] << endl;
            }
        break; // break가 밖에 있으면 한 번만 검사하고 끝남
        }
    } while (next_permutation(a, a+9));
    return 0;

}

