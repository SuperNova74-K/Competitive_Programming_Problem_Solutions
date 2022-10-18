// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 17/Oct/2022 on 05:38:38
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1744A_Number_Replacement

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define YES "YES"
#define NO "NO"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
#define fillv for (int i = 0; i < n; ++i) {cin >> v[i];}

using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;

void solve() {
    ll n; cin >> n;
    vll v(n);
    fillv
    string lol;
    cin >> lol;

    unordered_map<ll , char>map;
    for (int i = 0; i < n; ++i) {
        if(not map.count(v[i])){
            map[v[i]] = lol[i];
            v[i] = lol[i];
        }else{
            v[i] = map[v[i]];
        }
    }
    string anotherlol;
    for (int i = 0; i < n; ++i) {
        anotherlol += char(v[i]);
    }

    if(anotherlol == lol){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
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