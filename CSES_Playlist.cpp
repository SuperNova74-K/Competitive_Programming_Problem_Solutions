//
// Created by Khaled Waleed on 02-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    int n;
    cin >> n;
    vector<ll>vec(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }

    ll l = 1, r = n, mx=0;

    while(l <= r){
        ll midpoint = (l+r)/2;

        ll i = 1,j = midpoint, cntr = 0;
        unordered_map<ll,ll>freq;
        for (int k = 1; k < midpoint; ++k) {
            if(not freq.count(vec[k])){
                cntr++;
            }
            freq[vec[k]]++;
        }


        while(cntr != midpoint && j <= n){
            if(freq.count(vec[j])){
                freq[vec[j]]++;
            }else{
                cntr++;
                freq[vec[j]] = 1;
            }

            if(cntr != midpoint){
                if(freq[vec[i]] > 1){
                    freq[vec[i]]--;
                }else{
                    cntr--;
                    freq.erase(vec[i]);
                }
            }
            i++;
            j++;
        }

        if(cntr == midpoint){
            l = midpoint+1;
            mx = max(mx, midpoint);
        }else{
            r = midpoint - 1;
        }

    }



    cout << mx;

    return 0;
}