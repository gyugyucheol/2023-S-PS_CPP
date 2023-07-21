#include <bits/stdc++.h>
using namespace std;

int main(){
    string word, temp;
    cin >> word; 

    // int length = strlen(word), count = 0;
    // for (int i = 0; i < length; i++){
    //     if(word[i] != word[length - i - 1]){
    //         cout << 0 << endl;    
    //         break;        
    //     }
    //     else{
    //         count++;
    //     }
    // }
    // if (count == length){
    //     cout << 1 << endl;
    // }    

    if (word == string(word.rbegin(), word.rend())){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}