// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 01/Sep/2022 on 15:24:36
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem UVA_12455_Bars
// BackTracking , we are generating all the posssible combinations then comparing to the target

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

vector<ll>subset;
bool ok = false;

void solve(ll target, vector<ll>&v, ll indx, ll n) {
    if(indx == n){
        ll sum = 0;
        for (int i = 0; i < subset.size(); ++i) {
            sum += subset[i];
        }
        ok += (sum == target);
    }else{
        solve(target, v ,indx+1, n);
        subset.push_back(v[indx]);
        solve(target , v , indx + 1 , n);
        subset.pop_back();
    }
}


int main() {
    fio

    int t;
    cin >> t;
    while (t--) {
        ll target , n;
        cin >> target >> n;
        vector<ll>v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        solve(target , v , 0 , n);
        if(ok){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        ok = false;
        subset.clear();
    }

    return 0;
}