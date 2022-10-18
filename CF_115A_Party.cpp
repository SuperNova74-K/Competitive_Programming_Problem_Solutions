// أبدأ بسم الله مستعينا        راض به مدبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author     : Khaled Waleed
// Date       : 24/Aug/2022 on 19:14:55
// University : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn   : https://www.linkedin.com/in/khaled-waleed-salah/
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_115A_Party

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    string a;
    unordered_set<char>set;
    cin >> a;
    set.insert(a[0]);
    set.insert(a[1]);
    cin >> a;
    set.insert(a[0]);
    set.insert(a[1]);

    cout << set.size()-1 << '\n';

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