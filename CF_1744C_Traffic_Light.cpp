// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 17/Oct/2022 on 06:02:37
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1744C_Traffic_Light

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
    ll n;
    char currently_on;
    cin >> n;
    cin >> currently_on;
    string lol;
    cin >> lol;
    vint v;

    for (int i = 0; i < n; ++i) {
        if(lol[i] == 'g'){
            v.push_back(i);
        }
    }

    ll time = 0;
//    for (int i = 0; i < n; ++i) {
//        if(lol[i] == currently_on){
//            ll indx = upper_bound(v.begin(), v.end() , i) - v.begin();
//            if(indx == n){
//                indx = 0;
//            }
//            if(v[indx] < i){
//                indx = 0;
//            }
//            ll temp_time=0;
//            if(v[indx] >= i){
//                temp_time = v[indx] - i;
//            }else{
//                temp_time = (n-i) + v[indx];
//            }
//            time = max(time, temp_time);
//        }
//    }

    string firsttemp = lol.substr(0,v[v.size()-1]);
    string secondtemp = lol.substr(v[v.size()-1]);
    lol = secondtemp + firsttemp;
    v.clear();
    for (int i = 0; i < n; ++i) {
        if(lol[i] == 'g'){
            v.push_back(i);
        }
    }

    for (int i = 0; i < n; ++i) {
        if(lol[i] == currently_on){
            ll indx = std::upper_bound(v.begin(), v.end(),i) - v.begin();
            time = max(time, v[indx] - (ll)i);
        }
    }

    cout << time << newline;
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