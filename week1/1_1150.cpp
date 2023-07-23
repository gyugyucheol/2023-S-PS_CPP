#include <bits/stdc++.h>

using namespace std;

int main(){
    int number = 0;
    int count_alpha[26] = {0,}; 
    char name[150][30] = {0,};

    cin >> number;
    for (int i = 0; i < number; i++){
        cin >> name[i]; 
    }

    for(int i = 0; i < number; i++){
        count_alpha[name[i][0] - 'a']++;
    }

    int flag = 0;

    for(int i = 0; i < 26; i++){
        if(count_alpha[i] >= 5){
            cout << (char)(i + 'a');
            flag = 1;
        }
    }

    if(flag == 0){
        cout << "PREDAJA";
    }

    return 0; 

}