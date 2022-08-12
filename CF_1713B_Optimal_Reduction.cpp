//
// Created by Khaled Waleed on 06-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n; cin >>n;
    deque<ll>vec(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }
    ll l = 1, r = n,mx_left = vec[1],mx_right = vec[n];
    ll i = 1;
    while(l < r){
        for (i = l + 1; i < r ; ++i) {
            if(mx_left > vec[i] && mx_right > vec[i]){
                cout << "NO\n";
                return;
            }
        }

        l++;
        r--;

        mx_left = max(mx_left,vec[l]);
        mx_right = max(mx_right,vec[r]);

    }
    cout << "YES\n";

//    priority_queue<ll, vector<ll> , greater<> >pr;
//    for (int i = 1; i <= n; ++i) {
//        cin >> vec[i];
//        pr.push(vec[i]);
//    }
//    ll tankees = pr.top();
//    ll how_many_zeros_were_erased = 0;
//    while(not vec.empty()){
//        while(vec[1]==0){
//            vec.erase(vec.begin()+1,vec.begin()+2);
//            how_many_zeros_were_erased++;
//        }
//        while(vec[n] == 0){
//            vec.pop_back();
//            how_many_zeros_were_erased++;
//        }
//        for (int i = 2; i <= n-how_many_zeros_were_erased; ++i) {
//            if(vec[i] - tankees == 0){
//                cout << "NO\n";
//                return;
//            }else{
//                vec[i]-=tankees;
//            }
//        }
//        pr.pop();
//        tankees = pr.top()-tankees;
//    }
//    cout << "YES\n";



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