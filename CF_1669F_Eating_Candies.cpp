//
// Created by Khaled Waleed on 02-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int arr[200005];

void solve() {
    ll n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    ll l = 1,r = n;
    ll sum1 = arr[l],sum2 = arr[n],answer = 0;
    while(l < r){
        if(sum1 == sum2){
            answer = l + ( n - r + 1);
            l++;
            sum1 += arr[l];
        }else if(sum1 < sum2){
            l++;
            sum1 += arr[l];
        }else{
            r--;
            sum2 += arr[r];
        }
    }
    cout << answer << '\n';
}


int main() {
    fio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}