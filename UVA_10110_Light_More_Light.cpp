//
// Created by Khaled Waleed on 10-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    while(n != 0){
        int sqt = sqrt(n);
        if(sqt * sqt == n){
            cout << "yes";
        }else{
            cout << "no";
        }
        cout << '\n';
        cin >> n;
    }


    return 0;
}