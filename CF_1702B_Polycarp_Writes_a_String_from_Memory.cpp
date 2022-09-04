// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Sep/2022 on 12:31:26
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1702B_Polycarp_Writes_a_String_from_Memory

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    string lol; cin >> lol;
    unordered_set<ll>set;
    ll uniq = 0, answer = 0;
    for (int i = 0; i < lol.size(); ++i) {
        if(uniq < 4){
            if(not set.count(lol[i])) {
                uniq++;
                set.insert(lol[i]);
            }
            if(uniq == 4){
                answer++;
                uniq = 0;
                set.clear();
                i--;
            }
        }else{
            answer++;
            uniq = 0;
            set.clear();
            i--;
        }
    }
    if(not set.empty()){
        answer++;
    }
    cout << answer << '\n';
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