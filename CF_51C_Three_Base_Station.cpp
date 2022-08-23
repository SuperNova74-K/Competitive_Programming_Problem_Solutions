//
// Created by Khaled Waleed on 16-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool ok(long double midpoint,const vector<long double>&vec, ll n) {

    ll nxt = 0;
    for (int i = 0; i < 3; ++i) {
        nxt = upper_bound(vec.begin(),vec.end(),vec[nxt]+midpoint*2) - vec.begin();
        if(nxt == n){
            return true;
        }
    }
    return false;

}


int main() {
    fio

    ll n; cin >> n;
    long double answer;
    vector<long double>house(n);
    for (int i = 0; i < n; ++i) {
        cin >> house[i];
    }
    std::sort(house.begin(), house.end());

    long double l = 0,r = 1e9;
    long double midpoint;
    for (int i = 0; i < 100; ++i) {
        midpoint = (l+r)/2.0;

        if(ok(midpoint, house,n)){
            r = midpoint;
            answer = midpoint;
        }else{
            l = midpoint;
        }
    }
    cout << fixed << setprecision(6) << answer << '\n';
    ll nxt=0;
    for (int i = 0; i < 3; ++i) {
        if(nxt > n - 1){
            nxt = n-1;
        }
        cout << house[nxt]+answer << ' ';
        nxt =  upper_bound(house.begin(),house.end(),house[nxt]+2*answer) - house.begin();

    }

    return 0;
}