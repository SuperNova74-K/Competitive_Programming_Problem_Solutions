// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 07/Sep/2022 on 11:46:42
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_17A_Noldbach_problem

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void sieve(vector<bool>&vec, vector<ll>&primes, ll & n) {
    for (int i = 2; i <=n; ++i) {
        if(vec[i]){
            primes.push_back(i);
            for (int j = 2*i; j <= n; j+=i) {
                vec[j] = false;
            }
        }
    }
}


int main() {
    fio
    ll n,k; cin >> n >> k;
    vector<bool>vec(n+1, true);
    vector<ll>primes;
    ll answer = 0;
    sieve(vec, primes, n);
    for (int i = 0; i < primes.size()-1; ++i) {
        ll res = primes[i] + primes[i+1] + 1;
        if(res <= n && vec[res])answer++;
    }

    if(answer >= k){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}