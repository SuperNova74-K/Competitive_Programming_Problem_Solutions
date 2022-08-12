//
// Created by Khaled Waleed on 30-Jul-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {

    ll n,x; cin >> n >> x;
    vector<ll>vec(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }
    // we make a dynamic sliding window
    //This solution was done by help of
    // ARS LONGA VITA BREVIS , Youtube video explaining it : https://www.youtube.com/watch?v=mQiIsNFhVSA&t=922s&ab_channel=ARSLONGAVITABREVIS
    // this is a solution but we can do better because this won't work with negative numbers
    ll l = 1,r = 1,sum = 0, answer = 0;
    bool flag = false;

//    while(r <= n){
//        sum += vec[r];
//        while(sum >= x){
//            if(sum == x){
//                answer++;
//            }
//            sum -= vec[l];
//            l++;
//        }
//        r++;
//    }
//    cout << answer;

    ll prefix;
    unordered_map<ll,ll>map;
    map[0] = 1;
    // this solution works with negative numbers
    for (int i = 1; i <= n; ++i) {
        sum += vec[i];
        prefix = sum - x;
        if(map.count(prefix) != 0){
            answer += map[prefix];
        }else{
            map[prefix] = 1;
        }

        if(map.count(sum) != 0){
            map[sum]++;
        }else{
            map[sum] = 1;
        }
    }

    cout << answer;


}


int main() {
    fio

    solve();

    return 0;
}