// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 11/Sep/2022 on 12:02:51
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1407B_Big_Vova

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    int n; cin >> n;
    int freq[1001]{0};
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }
    int size = n;
    int gc = 0;
    unordered_set<int>taken;
    while(size){
        pair<int,int>maxg_indx;
        for (int i = 0; i < n; ++i) {
            if(not taken.count(a[i])) {
                int ggccdd = __gcd(gc, a[i]);
                if (ggccdd > maxg_indx.first) {
                    maxg_indx.first = ggccdd;
                    maxg_indx.second = i;
                }
            }
        }

        for (int i = 0; i < freq[a[maxg_indx.second]]; ++i) {
            b[n-size]= a[maxg_indx.second];
            size--;
        }
        taken.insert(a[maxg_indx.second]);
        freq[a[maxg_indx.second]] = 0;
        gc = maxg_indx.first;
    }

    for (int i = 0; i < n; ++i) {
        cout << b[i] << ' ';
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