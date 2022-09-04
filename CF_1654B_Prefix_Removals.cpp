// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Sep/2022 on 13:18:26
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1654B_Prefix_Removals

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

// refer to the problem's tutorial
void solve() {
    string lol; cin >> lol;
    int arr[266]{0};
    for (int i = 0; i < lol.size(); ++i) {
        arr[lol[i]]++;
    }

    for (int i = 0; i < lol.size(); ++i) {
        if(--arr[lol[i]] == 0){
            for (int j = i; j < lol.size(); ++j) {
                cout << lol[j];
            }
            cout << '\n';
            break;
        }
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