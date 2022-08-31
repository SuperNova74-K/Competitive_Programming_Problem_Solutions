// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 30/Aug/2022 on 16:54:50
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1772A_Spell_Check

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll length; cin >> length;
    string s; cin >> s;
    if(length != 5){
        cout << "NO\n";
        return;
    }
    unordered_map<char, ll>timur{{'T',0},{'i',0}, {'m',0},{'u',0},{'r',0}};
    for (char & i : s) {
        if(not timur.count(i)){
            cout << "NO\n";
            return;
        }
        if(timur[i] > 0){
            cout << "NO\n";
            return;
        }
        timur[i]++;
    }
    cout << "YES\n";
}


int main(){
    fio
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}