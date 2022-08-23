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


    unordered_set<char>set;
    string lol; cin >> lol;
    lol = "0" + lol;

    for (int i = 1; i <= n; ++i) {
        set.insert(lol[i]);
    }

    ll l = set.size() , r = n, answer = INT16_MAX;

    while(l<=r){
        ll midpoint = (l+r)/2;
        unordered_map<char,ll>map;
        ll i = 1,j = 1, current_uniq = 0,max_uniq=0;
        while(j <= midpoint){
            if(not map.count(lol[j])){
                current_uniq++;
            }
            map[lol[j]]++;
            j++;
        }

        max_uniq = max(max_uniq,current_uniq);

        while(current_uniq != set.size() && j<=n){
            if(not map.count(lol[j])){
                current_uniq++;
            }
            map[lol[j]]++;
            if(map[lol[i]] < 2){
                current_uniq--;
                map.erase(lol[i]);
            }else{
                map[lol[i]]--;
            }

            j++;
            i++;
            max_uniq = max(max_uniq,current_uniq);
        }


        if(max_uniq == set.size()){
            answer = min(answer,midpoint);
            r = midpoint-1;
        }else{
            l = midpoint+1;
        }
    }

    cout << answer;

    return 0;
}