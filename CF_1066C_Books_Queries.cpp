//
// Created by Khaled Waleed on 02-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll arr[200 * 1000 + 11];

int main() {


    fio

    ll q, n, l = 0 , r = 0; cin >> q;
    char lol;
    q--;
    cin >> lol >> n;
    l--;
    r++;
    arr[n] = 0;
    while(q--){
        cin >> lol >> n;
        if(lol == 'R'){
            arr[n] = r++;
        }else if (lol == 'L'){
            arr[n] = l--;
        }else{
            cout << min(abs(arr[n] - r), abs(arr[n] - l)) - 1<< '\n';
        }
    }

    return 0;
}