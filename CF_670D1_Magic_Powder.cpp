// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 30/Aug/2022 on 12:43:36
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_670D1_Magic_Powder

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n, k; cin >> n >> k;
    vector<ll>a(n);
    vector<ll>b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    ll l = 0 , r = 1000000000+k, midpoint , answer = 0;
    here:
    while(l <= r){
        midpoint = (l+r) / 2;
        ll magic = k;
        for (int i = 0; i < n; ++i) {
            if(b[i] < midpoint * a[i]){
                if(magic > 0){
                    ll temp = min((midpoint * a[i]) - b[i], magic);
                    magic -= temp;
                    if(b[i] + temp < midpoint * a[i]){
                        r = midpoint-1;
                        goto here;
                    }
                }else{
                    r = midpoint-1;
                    goto here;
                }
            }
        }
        answer = max(midpoint, answer);
        l = midpoint + 1;
    }

    cout << answer;


    return 0;
}









