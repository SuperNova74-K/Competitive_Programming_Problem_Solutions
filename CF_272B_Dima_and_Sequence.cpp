// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 03/Sep/2022 on 10:21:39
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_272B_Dima_and_Sequence

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;




int main() {
    fio

    ll n; cin >> n;
    ll bits[65]{};
    ll temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        bits[__builtin_popcount(temp)]++;
    }

    ll answer = 0;
    for (int i = 0; i < 65; ++i) {
        answer += ((bits[i]) * (bits[i]-1)) / 2;
    }


    cout << answer;

    return 0;
}