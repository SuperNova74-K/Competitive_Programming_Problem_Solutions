// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 30/Aug/2022 on 17:30:23
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1722D_Line

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll cntr = 0;
ll l = 1;


bool change_one(string & main, ll & score , ll & n,int & i ,vector<ll> & scores){
    there:
    ll r = n - cntr;

    if(l > r){
        return true;
    }

    if(l <= cntr){
        if(main[l] == 'L'){
            main[l] = 'R';
            score -= (l-1);
            score += n-l;
        }else{
            l++;
            goto there;
        }
        l++;
    }else{
        if(main[r] == 'R'){
            main[r] = 'L';
            score -= n-r;
            score += (r-1);
        }else{
            cntr++;
            goto there;
        }
        cntr++;

    }

    scores[i] = score;
    return false;
}

void solve() {
    ll n; cin >> n;
    cntr = 0;
    l = 1;
    string main; cin >> main;
    main = '0' + main;

    ll score = 0;
    for (int i = 1; i <= n; ++i) {
        if(main[i] == 'R'){
            score += (n - i);
        }else{
            score += i - 1;
        }
    }


    vector<ll>scores(n+1);
    bool were_done = false;
    ll ultimate = 0;
    for (int i = 1; i <= n; ++i) {
        if(were_done){
            scores[i] = ultimate;
        }else{

            if(change_one(main, score, n, i, scores)){
                were_done = true;
                ultimate = score;
                scores[i] = score;
            }
        }
    }

    for (int i = 1; i < n; ++i) {
        cout << scores[i]<< ' ';
    }
    cout <<  scores[n] << '\n';

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