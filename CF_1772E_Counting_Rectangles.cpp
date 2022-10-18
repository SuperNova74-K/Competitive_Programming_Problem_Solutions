// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 31/Aug/2022 on 13:01:17
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1772E_Counting_Rectangles

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

long long arr[1005][1005]{};
long long prefix[1005][1005]{};

void solve() {
    ll n ,q ; cin >> n >> q;
    ll hi,wi, hi2, wi2;

    for (int i = 0; i <= 1001; ++i) {
        for (int j = 0; j <= 1001; ++j) {
            arr[i][j] = prefix[i][j] =  0;
        }
    }

    for (int i = 0; i < n; ++i) {
        cin >> hi >> wi;
        arr[hi][wi] += (hi * wi);
    }

    for (int i = 1; i <= 1001; ++i) {
        for (int j = 1; j <= 1001; ++j) {
            prefix[i][j] = (prefix[i-1][j]
                       + prefix[i][j-1]
                       - prefix[i-1][j-1]
                       + arr[i][j]);
        }
    }

    for (int i = 0; i < q; ++i) {
        cin >> hi >> wi >> hi2 >> wi2;
        cout << prefix[hi2-1][wi2-1] - prefix[hi][wi2-1] - prefix[hi2-1][wi] + prefix[hi][wi] << '\n';
    }

}


int main() {
    fio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}