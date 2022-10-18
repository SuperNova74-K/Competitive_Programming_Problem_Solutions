// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 17/Oct/2022 on 05:48:42
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1744B_Even_Odd_increments

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define YES "YES"
#define NO "NO"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
#define fillv for (int i = 0; i < n; ++i) {cin >> v[i];}

using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;

void solve() {
    ll n,temp,odd = 0,even = 0, sum =0, q ;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        odd += (temp&1);
        even += (not (temp&1));
        sum += temp;
    }

    for (int i = 0; i < q; ++i) {
        cin >> temp;
        if(temp){
            // odd
            cin >> temp;
            sum += (odd * temp);
            if(temp&1){
                odd = 0;
                even = n;
            }
        }else{
            // even
            cin >> temp;
            sum += (even * temp);
            if(temp&1){
                even = 0;
                odd = n;
            }
        }
        cout << sum << newline;
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