// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 20/Sep/2022 on 21:15:25
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1660D_Maximum_Product_Strikes_Back

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;



// THIS IS A DRAFT NOT A SOLUTION


void solve() {
    int n; cin >>n ;
    vector<int>v(n+1);
    v[0] = 1;
    ll first_zero = 0 , second_zero = n+1;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; ++i) {
        if(not v[i] && i != second_zero){
            first_zero = i;
        }
        if(not v[n-i+1] && n-i+1 != first_zero){
            second_zero = n-i+1;
        }
    }
    vector<int>prefix = v;
    prefix[first_zero] = 1;
    for (int i = first_zero + 1; i <= second_zero - 1; ++i) {
        prefix[i] *= prefix[i-1];
    }
//    while(prefix[second_zero-1]/prefix[first_zero + 1] < 0  && first_zero < second_zero){
//        if(v[first_zero + 1] < v[second_zero-1]){
//            first_zero++;
//        }else{
//            second_zero--;
//        }
//    }
    vector<ll>negatives;
    for (int i = first_zero + 1; i < second_zero; ++i) {
        if(v[i] < 0){
            negatives.push_back(i);
        }
    }

    if(not negatives.empty()) {
        if (negatives.size() == 1) {
            if ((prefix[second_zero-1]) / prefix[negatives[0]] > prefix[negatives[0]] / prefix[first_zero]) {
                first_zero = negatives[0];
            } else {
                second_zero = negatives[0];
            }
        }else if(negatives.size() & 1){
            if ((prefix[second_zero-1]) / prefix[negatives[0]] > prefix[negatives[negatives.size()-1]-1]) {
                first_zero = negatives[0];
            } else {
                second_zero = negatives[negatives.size()-1];
            }
        }
    }

    if(first_zero >= second_zero){
        cout << n << spacebar << 0;
    }else{
//        if(first_zero == 0 and n-second_zero+1 == 0){
//            cout << (v[1] > v[n]) << spacebar << (v[1] <= v[n]);
//        }else {
            cout << first_zero << spacebar << n - second_zero + 1;
//        }
    }
    cout << newline;

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