// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 06/Sep/2022 on 12:30:32
// University       : Cairo University - Faculty Of Computers and Artificial llelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1454D_Number_llo_Sequence

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

bool comparator(const pair<ll ,ll>& a,const pair<ll ,ll>& b){
    return (a.second > b.second);
}

void factors_of(ll n, vector<pair<ll,ll>>&factors) {
    for (ll i = 2; i <= n/i; ++i) {
        ll cntr = 0;
        while(n % i==0){
            n/=i;
            cntr++;
        }
        if(cntr){
            factors.emplace_back(i, cntr);
        }
    }
    if(n>1){
        factors.emplace_back(n, 1);
    }
}


int main() {
    fio

    ll t, temp;
    cin >> t;
    while (t--) {

        cin >> temp;
        vector<pair<ll,ll>>factors;
        factors_of(temp, factors);

        std::sort(factors.begin(), factors.end(), comparator);
        ll cntr = factors[0].second;
        ll num = factors[0].first;
        cout << cntr<<'\n';
        for (int i = 0; i < cntr-1; ++i) {
            cout << num << ' ';
        }
        bool entered = false;
        for (int i = 1; i < factors.size(); ++i) {
            while(factors[i].second--){
                num*=factors[i].first;
            }
            entered = true;
        }
        if(entered || factors.size() == 1){
            cout << num;
        }
        cout << '\n';
    }

    return 0;
}