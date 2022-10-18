// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Oct/2022 on 21:52:22
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1647C_Madoka_and_Childish_Pranks

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
    ll n,m;
    cin >> n>> m;
    bool matrix[101][101]{0};
    string lol;
    for (int i = 1; i <= n; ++i) {
        cin >> lol;
        for (int j = 1; j <= m; ++j) {
            matrix[i][j] = (lol[j-1]=='1');
        }
    }
    stringstream ss;
    ll answer = 0;

    if(matrix[1][1]){
        cout << -1 << newline;
        return;
    }

    for (int i = n; i >= 1; --i) {
        for (int j = m; j >= 1; --j) {
            if(matrix[i][j]){
                if(j == 1){
                    ss << i-1 << spacebar << j << spacebar << i << spacebar << j << newline;
                }else{
                    ss << i << spacebar << j-1 << spacebar << i << spacebar << j << newline;
                }
                answer++;
            }
        }
    }

//    for (int i = 2; i <= m ; ++i) {
//        if(matrix[1][i]){
//            ss << 1 << spacebar << i-1 << spacebar << 1 << spacebar << i << newline;
//            answer++;
//        }
//    }

    cout << answer << newline << ss.str();
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