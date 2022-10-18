// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 02/Oct/2022 on 17:25:45
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1646B_Quality_vs_Quantity

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
#define fillv for (int i = 0; i < n; ++i) {cin >> v[i];}
#define YESSS "YES"
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;

void solve() {
    ll n; cin >> n;
    vll v(n);
    fillv
    std::sort(v.rbegin(), v.rend());
    ll l = 0,r = n-1, lsum = v[0], rsum = v[n-1];
    while(l<r){
        if(l+1 >= n-r){
            r--;
            rsum+=v[r];
        }else{
            if(rsum >= lsum){
                l++;
                lsum += v[l];
            }else{
                cout << YESSS << newline;
                return;
            }
        }
    }
    cout << "NO" << newline;
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