#include <bits/stdc++.h>
using namespace std;

int main(){
    int material_count = 0, need_amount = 0;
    cin >> material_count >> need_amount;

    int array[material_count] = {0,};
    for (int i = 0; i < material_count; i++){
        cin >> array[i];
    }

    int flag = 0;
    for (int i = 0; i < material_count; i++){
        for (int j = i+1; j < material_count; j++){
            if(array[i] + array[j] == need_amount){
                flag++;                
            }
        }
    }

    cout << flag << endl;

}