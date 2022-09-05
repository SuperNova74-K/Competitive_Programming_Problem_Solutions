// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 05/Sep/2022 on 13:30:05
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_26A_Almost_Prime

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

bool isprime(ll n){
    for (int i = 2; i <= n/i; ++i) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

vector<ll> sieve(ll n){
    vector<ll>vec(n+1,0);
    for (int i = 2; i < n; ++i) {
        if(isprime(i)){
            for (int j = 2*i; j <n+1; j+=i) {
                vec[j]++;
            }
        }
    }
    return vec;
}


int main(){
    fio
    
    ll n; cin >> n;
    vector<ll>vec = sieve(n);
    ll cntr = 0;
    for (int i = 0; i < n+1; ++i) {
        if(vec[i] == 2){
            cntr++;
        }
    }
    cout << cntr;
    return 0;
}