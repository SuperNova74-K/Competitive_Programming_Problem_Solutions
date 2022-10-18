// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 06/Oct/2022 on 16:20:30
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1721C_Min_Max_Array_Transformation

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define YES "YES"
#define NO "NO"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
#define fillv(x) for (int i = 0; i < n; ++i) {cin >> x[i];}

using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;

void solve() {
    ll n; cin >> n;
    vll v(n);
    vll v2(n);

    fillv(v)
    fillv(v2)
//    stringstream ss;
    for (int i = 0; i < n; ++i) {
        cout << v2[lower_bound(v2.begin(),v2.end(),v[i])-v2.begin()] - v[i] << spacebar;
    }
    cout << newline;


    vll result(n);
    ll cntr = n-1;
    ll last_box = n;
    for (int i = n-1; i >= 0; --i) {
//        ll indx = std::lower_bound(v2.begin(), v2.end(),v[i]) - v2.begin();
        ll l = 0,r = n-1, midpoint, answer = -1;
        while(l<=r){
            midpoint = (l+r)/2;
            if(v2[midpoint] <= v[i]){
                l = midpoint+1;
                answer = midpoint;
            }else{
                r = midpoint-1;
            }
        }

        if(answer == -1){
            result[cntr] = v2[last_box-1] - v[i];
            cntr--;
        }else{
            last_box = answer+1;
            for (int j = i; j >= answer+1; --j) {
                result[cntr] = v2[i] - v[j];
                cntr--;
            }
            i-= (answer+1-i);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << ' ';
    }
    cout << newline;
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