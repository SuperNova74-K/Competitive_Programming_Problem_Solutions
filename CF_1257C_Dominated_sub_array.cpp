//
// Created by Khaled Waleed on 04-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll arr[200005];

void solve() {
    ll n; cin >> n;
    ll answer = 99999999;
    bool negative_one = true;
    for (int i = 1; i <= n; ++i) {
        ll temp; cin >> temp;
        if(arr[temp] == -1){
            arr[temp] = i;
        }else{
            answer = min(answer, i-arr[temp]+1);
            negative_one = false;
            arr[temp] = i;
        }
    }
    cout << (negative_one ? -1 : answer) << '\n';


}


int main() {
    fio
    int t;
    cin >> t;
    while (t--) {
        fill(arr, arr + 200005, -1);
        solve();
    }

    return 0;
}