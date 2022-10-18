// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 11/Sep/2022 on 11:20:52
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_230A_Dragons

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;



int main() {
    fio

    ll s,n; cin >> s >> n;
    vector<ll>sums(1e4+1);
    vector<ll>monsters(n);
    for (int i = 0; i < n; ++i) {
        cin >> monsters[i];
        ll temp; cin >> temp;
        sums[monsters[i]] += temp;
    }
    unordered_set<ll>taken;
    sort(monsters.begin(), monsters.end());
    for (int i = 0; i < n; ++i) {
        if(s > monsters[i]){
            if(not taken.count(monsters[i])) {
                s += sums[monsters[i]];
                taken.insert(monsters[i]);
            }
        }else{
            cout << "NO\n";
            return 0;
        }
    }
    cout <<  "YES\n";

    return 0;
}