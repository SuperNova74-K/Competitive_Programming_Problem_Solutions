// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 19/Sep/2022 on 15:05:00
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1530C_Pursuit

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll>first(n+1);
    vector<ll>second(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> first[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> second[i];
    }
    std::sort(first.rbegin(), first.rend()-1);
    std::sort(second.rbegin(), second.rend()-1);
    for (int i = 1; i <= n; ++i) {
        first[i] += first[i-1];
    }
    for (int i = 1; i <= n; ++i) {
        second[i] += second[i-1];
    }

    if(first[n-n/4] >= second[n-n/4]){cout << 0 << '\n'; return;}

    ll l = 1,r=n, midpoint, answer;
    while(l<=r){
        midpoint = (l+r)/2;
        ll start = ((n+midpoint)/4)+1;
        ll firstscore = 0, secondscore = second[n];

        if(start<=n){
            firstscore = first[n-start+1];
//            secondscore = second[n-start+1];
            // numbers left larger than zeros
        }

        if(start-1 > midpoint){
            secondscore = second[n-(start-1 - midpoint)];
        }


        if(firstscore + midpoint * 100 >= secondscore){
            r = midpoint-1;
            answer = midpoint;
        }else{
            l = midpoint + 1;
        }
    }
    cout << answer << '\n';

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