// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 05/Sep/2022 on 19:05:47
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem SPOJ_TDPRIMES_Printing_some_primes

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;


int main() {
    fio
    const ll N = 1e8;
    vector<bool>vec(N+1,true);
    vec[0] = vec[1] = false;
    for (int i = 2; i*i <= N; ++i) {
        if(vec[i]){
            for (int j = i*i; j <= N; j+=i) {
                vec[j] = false;
            }
        }
    }
    ll cntr = 1;
    for (int i = 2; i <= N; ++i) {
        if(vec[i]){
            if(cntr % 100 == 1)cout << i << '\n';
            cntr++;
        }
    }


    return 0;
}
