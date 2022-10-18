// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 14/Sep/2022 on 21:21:03
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1358B_Maria_Breaks_the_Self-isolation

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    ll current = 1;
    std::sort(vec.begin(), vec.end());
    ll right = 0;
    while(right < n){
        if(vec[right] <= current){
            current++;
        }else{
            ll mx = vec[right];
            ll cntr = current;
            while(right < n){
                if(vec[right] > mx) mx = vec[right];
                cntr++;
                if(cntr >= mx){
                    current = cntr;
                }
                right++;
            }
        }
        right++;
    }
    cout << current << '\n';
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