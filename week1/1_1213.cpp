#include <bits/stdc++.h>
using namespace std;

int main(){

    string input;
    cin >> input;
    int count[26] = {0,};

    for(char c : input){
        count[c-'A']++;
    }

    int odd = 0;
    for(int i=0; i<26; i++){
        if(count[i]%2 == 1){
            odd++;
        }
    }

    if(odd == 1 && input.size()%2 == 1){
        int mid = 0;
        for(int i=0; i<26; i++){
            if(count[i]%2 == 1){
                mid = i;
                break;
            }
        }
        for(int i=0; i<26; i++){
            for(int j=0; j<count[i]/2; j++){
                cout << (char)('A'+i);
            }
        }
        cout << (char)('A'+mid);
        for(int i=25; i>=0; i--){
            for(int j=0; j<count[i]/2; j++){
                cout << (char)('A'+i);
            }
        }
    }
    else if(odd == 0 && input.size()%2 == 0){
        for(int i=0; i<26; i++){
            for(int j=0; j<count[i]/2; j++){
                cout << (char)('A'+i);
            }
        }
        for(int i=25; i>=0; i--){
            for(int j=0; j<count[i]/2; j++){
                cout << (char)('A'+i);
            }
        }

    }
    else{
        cout << "I'm Sorry Hansoo";
        return 0;
    }
}
