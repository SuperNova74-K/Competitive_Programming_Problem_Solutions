// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 07/Sep/2022 on 13:28:29
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_797A_k-Factorization

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
ll all = 0;
void factorize(vector<pair<ll,ll>>&vec, ll n){
    for (int i = 2; i <= n/i; ++i) {
        ll cntr = 0;
        while(n%i == 0){
            cntr++;
            n/=i;
        }
        if(cntr)vec.emplace_back(i,cntr);
        all += cntr;
    }
    if(n>1){
        vec.emplace_back(n,1);
        all++;
    }
}


int main() {
    fio
    vector<pair<ll,ll>>vec;
    ll n,k; cin >> n >> k;
    factorize(vec,n);
    if(all < k){
        cout << -1;
    }else{
        ll cntr = 1;
        ll i = 0;
        ll last = 1;
        while(cntr < k){
            while(vec[i].second && cntr < k){
                cntr++;
                cout << vec[i].first <<' ';
                vec[i].second--;
            }

            while(vec[i].second--){
                cntr++;
                last *= vec[i].first;
            }
            i++;
        }
        while(i < vec.size()){
            while(vec[i].second--){
                last*=vec[i].first;
            }
            i++;
        }
        cout << last;
    }

    return 0;
}