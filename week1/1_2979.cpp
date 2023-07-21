#include <bits/stdc++.h>

using namespace std;

int main(){
    int car_num[3] = {0,}; 
    cin >> car_num[0] >> car_num[1] >> car_num[2]; 

    int car[3][2] = {{0,}, {0,}, {0,}}; 
    for(int i = 0; i < 3; i++){
        cin >> car[i][0] >> car[i][1]; //들어온 시간과 나간 시간을 입력
    }

    int fee[101] = {0,}; 
    for(int i = 0; i < 3; i++){
        for(int j = car[i][0]; j < car[i][1]; j++){
            fee[j]++; 
        }
    }

    int total_fee = 0;
    for(int i = 0; i < 101; i++){
        if(fee[i] == 1){
            total_fee += car_num[0];
        }
        else if(fee[i] == 2){
            total_fee += car_num[1] * 2;
        }
        else if(fee[i] == 3){
            total_fee += car_num[2] * 3;
        }
    }

    cout << total_fee << endl;



}