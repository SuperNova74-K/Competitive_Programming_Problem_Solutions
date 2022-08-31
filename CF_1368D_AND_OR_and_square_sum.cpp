// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 25/Aug/2022 on 18:24:42
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1368D_AND_OR_and_square_sum

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n; cin >> n;
    vector<ll>vec(n);
    vector<ll>bits(64);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        for (ll j = 0; j < 33; ++j) {
            bits[j] += (((1LL << j) & vec[i]) != 0);
        }
        vec[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        for (ll j = 0; j < 33; ++j) {
            if(bits[j]){
                bits[j]--;
                vec[i] |= (1LL << j);
            }
        }
    }
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += vec[i] * vec[i];
    }
    cout << sum;


    return 0;
}