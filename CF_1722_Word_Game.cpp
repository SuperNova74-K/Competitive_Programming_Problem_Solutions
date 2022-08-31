// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 30/Aug/2022 on 17:13:17
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1722_Word_Game

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n; cin >> n;
    unordered_map<string, ll>map;
    vector<string>one(n);
    vector<string>two(n);
    vector<string>three(n);
    string temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        map[temp]++;
        one[i] = temp;
    }

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        map[temp]++;
        two[i] = temp;
    }

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        map[temp]++;
        three[i] = temp;
    }
    ll points[3] {0,0,0};
    for (int i = 0; i < n; ++i) {
            if(map[one[i]] == 1){
                points[0] += 3;
            }
            if(map[one[i]] == 2){
                points[0] += 1;
            }
    }
    for (int i = 0; i < n; ++i) {
            if(map[two[i]] == 1){
                points[1] += 3;
            }
            if(map[two[i]] == 2){
                points[1] += 1;
            }
    }
    for (int i = 0; i < n; ++i) {

            if(map[three[i]] == 1){
                points[2] += 3;
            }
            if(map[three[i]] == 2){
                points[2] += 1;
            }

    }
    cout << points[0] << ' ' << points[1] << ' ' << points[2] << '\n';
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