#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_ans = 0, num_quiz = 0;
    cin >> num_ans >> num_quiz;

    map<string, int>mapped_ans;
    for (int i = 0; i < num_ans; i++){
        string temp;
        cin >> temp;
        mapped_ans.insert({temp,num_ans});
    }

    for (int i = 0; i < num_quiz; i++){
        string temp;
        cin >> temp;
        if (mapped_ans.find(temp) != mapped_ans.end()){
            cout << mapped_ans[temp] << endl;
        }
        else{
            cout << mapped_ans[temp] << endl;
        }
    }
}

