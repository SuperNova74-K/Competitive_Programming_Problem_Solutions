//
// Created by Khaled Waleed on 06-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


// first is the money , second is the friendship

int main() {
    fio

    int n,k;
    cin >> n >> k;
    vector<pair<ll,ll>>friends(n+1);
    for (ll i = 1; i <= n; ++i) {
        cin >> friends[i].first >> friends[i].second;
    }
    std::sort(friends.begin() + 1, friends.end());

    ll l = 1 , r = 1 , max_money = -1, current_friendship = 0,mx_friendship = 0;
    while(r <= n){

        current_friendship += friends[r].second;

        max_money = max(max_money,friends[r].first);

        while(friends[r].first - friends[l].first >= k){
            current_friendship -= friends[l].second;
            l++;
        }
        r++;

        mx_friendship = max(current_friendship,mx_friendship);

    }

    cout << mx_friendship;

    return 0;
}