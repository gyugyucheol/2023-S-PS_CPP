#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, out;
    cin >> a >> b >> c;
    b++;

    while(b--){
        out *= a%c;
    }
    out %= c;

    cout << out << endl;
}
