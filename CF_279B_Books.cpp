//
// Created by Khaled Waleed on 30-Jul-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



// this solution uses two pointers without binary search , it's very good yet not optimal
//void solve() {
//    ll n,t; cin >> n >> t;
//    ll l = 1,r = 1;
//    vector<ll>books(n+1);
//    for (int i = 1; i <= n; ++i) {
//        cin >> books[i];
//    }
//    ll mx = 0;
//    ll sum = 0;
//
//    while(l <= n){
//        if(r <= n && sum + books[r] <= t){
//            sum += books[r];
//            mx = max(mx, r-l+1);
//            r++;
//        }else{
//            sum -= books[l];
//            l++;
//        }
//    }
//
//    cout << mx;
//}





// this solution uses binary search to decide the length of the sub-array
//// and Prefix sum to sum without loops as well as sliding window to verify the size for the binary search
void solve() {
    ll n, t;
    cin >> n >> t;
    vector<ll> vec(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }
    for (int i = 2; i <= n; ++i) {
        vec[i] += vec[i - 1];
    }

    ll l = 1, r = n;

    ll mx = 0;

    while (l <= r) {
        ll midpoint = (r + l) / 2;

        ll i = 1, j = midpoint;

        while (j <= n) {
            if (i == 1) {
                if (vec[j] <= t) {
                    mx = max(midpoint, mx);
                    l = midpoint + 1;
                    break;
                } else {
                    i++;
                    j++;
                }
            } else {
                if (vec[j] - vec[i - 1] <= t) {
                    mx = max(midpoint, mx);
                    l = midpoint + 1;
                    break;
                } else {
                    i++;
                    j++;
                }
            }

        }
        if(mx < midpoint){
            r = midpoint - 1;
        }
    }
    cout << mx;
}

int main() {
    fio

    solve();

    return 0;
}