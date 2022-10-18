// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 20/Sep/2022 on 14:17:50
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1547C_Pair_Programming

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll k, n,m; cin >> k >> n >> m;
    vector<ll>first(n);
    vector<ll>second(m);
    ostringstream output;
    for (int i = 0; i < n; ++i) {
        cin >> first[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> second[i];
    }
    ll top = 0 , bottom = 0;
    while (top < n && bottom < m) {
        if (first[top] <= second[bottom]) {
            if (first[top] > k) {
                cout << -1 << newline;
                return;
            }
            if (first[top] == 0) { k++; }
            output << first[top] << spacebar;
            top++;
        }else{
            if (second[bottom] > k) {
                cout << -1 << newline;
                return;
            }
            if (second[bottom] == 0) { k++; }
            output << second[bottom] << spacebar;
            bottom++;
        }
    }
    while(top < n){
        if(first[top] <= k){
            output << first[top] << spacebar;
            if(not first[top])k++;
            top++;
        }else{
            cout << -1 << newline;
            return;
        }
    }

    while(bottom < m){
        if(second[bottom] <= k){
            output << second[bottom] << spacebar;
            if(not second[bottom])k++;
            bottom++;
        }else{
            cout << -1 << newline;
            return;
        }
    }

    cout << output.str() << newline;
}


int main() {
    fio

    int t;
    string lol;
    cin >> t;
    while (t--) {
        getline(cin , lol);
        cin.ignore();
        solve();
    }

    return 0;
}