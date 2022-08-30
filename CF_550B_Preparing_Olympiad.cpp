// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 30/Aug/2022 on 11:12:35
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_550B_Preparing_Olympiad

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    fio

    // Preparing Olympiad
    ll n, l,r,x; cin >> n >> l >> r >> x;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    ll answer = 0;
    for (int mask = 0; mask < (1LL << n); ++mask) {
        vector<ll>arr;
        for (int i = 0; i < n; ++i) {
            if(mask & (1LL << i)){
                arr.push_back(vec[i]);
            }
        }
        ll mn = INT_MAX, mx = 0, sum=0;
        for (int i = 0; i < arr.size(); ++i) {
            mn = min(arr[i], mn);
            mx = max(arr[i] , mx);
            sum += arr[i];
        }

        if(not arr.empty() && arr.size() >= 2) {
            if (l <= sum && sum <= r && (mx - mn) >=x) {
                answer++;
            }
        }
    }
    cout << answer;



    return 0;
}