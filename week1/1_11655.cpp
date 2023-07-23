#include <bits/stdc++.h>
using namespace std;

int main(){
    char sentence[100] = {0,};
    cin.getline(sentence, 100);

    for(int i = 0; i < 100; i++){
        //if(sentence[i] == '\0') break;
        if(sentence[i] >= 'a' && sentence[i] <= 'z'){
            if(sentence[i] + 13 > 'z') sentence[i] -= 13;
            else sentence[i] += 13;
        }
        else if(sentence[i] >= 'A' && sentence[i] <= 'Z'){
            if(sentence[i] + 13 > 'Z') sentence[i] -= 13;
            else sentence[i] += 13;
        }

        cout << sentence[i];
    }
}