// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 12/Sep/2022 on 16:45:35
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1729B_Decode_String

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n; cin >> n;
    string lol, final; cin >> lol;
    for (int i = n-1; i >= 0 ; --i) {
        string temp;
        if(lol[i] == '0'){
            temp = lol.substr(i-2,2);
            final.push_back(stoi(temp)+'a'-1);
            i-=2;
        }else{
            final.push_back(char(lol[i]-'0'+'a'-1));
        }
    }
    for (int i = final.size()-1; i >=0 ; --i) {
        cout << final[i];
    }
    cout << '\n';
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