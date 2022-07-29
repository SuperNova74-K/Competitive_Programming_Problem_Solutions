//
// Created by Khaled Waleed on 10-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);

    unsigned int n;

    while(cin >> n && n != 0){
        unsigned int sqt = sqrt(n);
        if(sqt * sqt == n){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }


    return 0;
}