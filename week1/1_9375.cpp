#include <bits/stdc++.h>
using namespace std;

int main(){
    int test_case = 0;
    cin >> test_case; 

    map<string, int> relation; // <type, count>
    // int case_num = 0;
    // cin >> case_num;
    // for(int i = 0; i < case_num; i++){
    //     string name, type;
    //     cin >> name >> type;
    //     relation[type]++; // 동일 type count
    // }
            //  for(int i = 0; i < n; i++){
            // cin >> a >> b;
            // _map[b]++;

    for(int i =0; i < test_case; i++){
        relation.clear();
        int case_num = 0;
        cin >> case_num;
        for(int i = 0; i < case_num; i++){
            string name, type;
            cin >> name >> type;
            relation[type]++; // 동일 type count
        }
        int result = 1;
        for(auto it = relation.begin(); it != relation.end(); it++){ //끝까지 돌면서
            result *= (it->second + 1); // 안입는 경우 포함
        }
        cout << result - 1 << endl; // 모두 안입는 경우 제외
    }

    return 0;
}