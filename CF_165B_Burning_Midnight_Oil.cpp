//
// Created by Khaled Waleed on 05-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    fio

    ll n, k; cin >> n >> k;
    ll lines, mn = INFINITY , l = 1, r = 999999999999999998;

    while(l <= r){
        ll midpoint = (l+r)/2, deno = 1;
        lines = 0; bool flag = true;
        while(lines < n && midpoint/deno != 0){
            lines += midpoint/deno;
            deno *= k;
            if(midpoint/deno == 0 && lines < n){
                flag = false;
            }
        }
        if(midpoint < mn && flag){
            mn = midpoint;
            r = midpoint-1;
        }else{
            l = midpoint + 1 ;
        }
    }

    cout << mn;


    return 0;
}