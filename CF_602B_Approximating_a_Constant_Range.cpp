//
// Created by Khaled Waleed on 06-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n; cin >> n;
    deque<ll>vec(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }

    ll l = 1 , r = 1 , answer = 0 ;

    unordered_map<ll,ll>map;
    ll cntr = 0;

    ll current_max = 0, current_min = INT16_MAX;
    while(r<=n){
        map[vec[r]]++;
        cntr++;

        while(map.size() > 2){
            cntr--;
            if(map[vec[l]] > 1){
                map[vec[l]]--;
            }else{
                map.erase(vec[l]);
            }
            l++;
        }

        answer = max( answer, cntr);
        r++;
    }
    cout << answer;

    return 0;
}