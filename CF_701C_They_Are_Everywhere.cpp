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
    string lol; cin >> lol;
    // Dynamic Sliding Window
    unordered_set<char>all_uniq_characters;
    for(char & i : lol){
        all_uniq_characters.insert(i);
    }
    ll n_uniq = all_uniq_characters.size();
    ll l=0,r=0;
    ll map[266]{0};
    ll current_size = 0, answer = n, uniq = 0;
    while(r < n){
        if(uniq == n_uniq && current_size == uniq){cout << uniq;return 0;}
        if(not map[lol[r]]){
            uniq++;
        }
        map[lol[r]]++;
        r++;
        current_size++;
        while(uniq == n_uniq){
            answer = min(answer, current_size);
            map[lol[l]]--;
            if(not map[lol[l]])uniq--;
            l++;
            current_size--;
        }
    }
    cout << answer;
    return 0;
}