// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 07/Sep/2022 on 13:55:01
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem SPOJ_NFACTOR_N-Factorful

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
const ll limit = 1e6;
int arr[11][limit+1]={0};

void sieve(vector<pair<bool,int>>&prime) {
    prime[0].first = prime[1].first = false;
    for (int i = 2; i <= limit; ++i) {
        if(prime[i].first){
            prime[i].second++;
            for (int j = i+i; j <= limit ; j+=i) {
                prime[j].first = false;
                prime[j].second++;
            }
        }
    }
}

ll solve(vector<pair<bool,int>>&dev) {
    ll a,b,n; cin >> a >> b >> n;
    return arr[n][b]-arr[n][a-1];
}


int main() {
    fio

    vector<pair<bool,int>>devisors(limit+1,{1,0});
    sieve(devisors);

    for (int i = 0; i <= 10; ++i) {
        for (int j = 1; j <= limit; ++j) {
            arr[i][j] = arr[i][j-1] + (devisors[j].second == i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        cout << solve(devisors) <<'\n';
    }

    return 0;
}