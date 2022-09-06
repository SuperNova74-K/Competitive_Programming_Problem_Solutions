// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 05/Sep/2022 on 13:42:03
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_230B_T-Primes

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

//
//bool prime(ll n){
//    for (int i = 2; i <= n/i ; ++i) {
//        if(n % i == 0){
//            return false;
//        }
//    }
//    return true;
//}

unordered_set<ll>yes;
vector<bool> sieve(){
    vector<bool>primes(1000001,true);
    primes[0] = primes[1] = false;
    for (ll i = 2; i < 1000001; ++i) {
        if(primes[i]){
            for (ll j = 2*i; j < 1000001; j+=i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}


int main() {
    fio
    vector<bool>vec = sieve();
    ll t,temp; cin >> t;
    for (ll i = 2; i < 1000001 ;++i) {
        if(vec[i]){
            yes.insert(i*i);
        }
    }
    while(t--){
        cin >> temp;
        yes.count(temp) ? cout << "YES\n" : cout << "NO\n";
    }




    return 0;
}
