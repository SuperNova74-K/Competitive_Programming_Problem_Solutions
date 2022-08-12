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

    ll t,enough;
    char lol;
    cin >> t;
    cin >> lol >> enough;
    arr[enough] = 0;
    t--;
    ll l = -1,r = 1;
    while (t--) {
        cin >> lol;
        ll temp; cin >> temp;
        if( lol == 'L'){
            arr[temp] = l;
            l--;
        }else if (lol == 'R'){
            arr[temp] = r;
            r++;
        }else{
            cout << min(abs(arr[temp] - r), abs(arr[temp] - l)) - 1 << '\n';
        }
    }

    return 0;
}