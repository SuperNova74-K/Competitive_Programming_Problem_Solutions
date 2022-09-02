// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 02/Sep/2022 on 15:26:05
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1452C_Two_Brackets

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

// we will just count how many closed brackets are there regardless of what's between them
void solve() {
    string s; cin >> s;
    // ( ) [ ]
    vector<ll>vec(2);
    ll answer = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == '('){
            vec[0]++;
        }else if(s[i] == '['){
            vec[1]++;
        }else if (s[i] == ')'){
            if(vec[0]){
                answer++;
                vec[0]--;
            }
        }else if(s[i] == ']'){
            if(vec[1]){
                answer++;
                vec[1]--;
            }
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