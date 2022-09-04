// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Sep/2022 on 14:41:50
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1672B_I_Love_AAAB

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    string lol; cin >> lol;

    bool answer = true;
    // refer to the problem tutorial


    if(lol[lol.size()-1] == 'B'){
        ll cntr = 0;
        for (int i = 0; i < lol.size(); ++i) {
            if(lol[i] == 'A'){
                cntr++;
            }else{
                cntr--;
            }
            if(cntr < 0){
                answer = false;
                break;
            }
        }

    }else{
        answer = false;
    }

    (answer && lol.size() > 1 )? cout << "YES\n" : cout << "NO\n";
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