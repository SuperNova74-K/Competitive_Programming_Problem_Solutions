// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 01/Sep/2022 on 11:31:22
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1722_Even_Odd_XOR

// The Idea is
// generating identical n/2-element sets of numbers then changing the leftmost bits of the set
// on the left accordingly to keep the ones in every bit-column even thus,
// keeping the XOR-ation of both sets equal while the numbers themselves are diffirent.
// then adding zero on the left set if n is odd which doesn't effect the answer

// check out this link : https://www.youtube.com/watch?v=gRcRyIdTKPg&ab_channel=CompetitiveCoding-NewtonSchool
// it's a bit diffirent solution from mine but the idea is close

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n; cin >> n ;
    // determinant is basically the amount of numbers in the left set excluding the zero
    // necessary for the bit-changing proccess later.
    ll determinant{(n+1)/2};
    if(n % 2 == 1){
        determinant--;
    }

    if(n == 3){
        cout << 3 << ' ' << 1 << ' ' << 2 << '\n';
        return;
    }

    vector<ll> right(n/2);
    vector<ll> left(n/2);



    for (int i = 0; i < n/2; ++i) {
        right[i] = i+1;
        left[i] = i+1;
    }

    if(determinant % 2 == 0){
        for (int i = 0; i < left.size(); ++i) {
            left[i] ^= (1LL << 29);
        }
    }else{
        left[0] ^= (3LL << 28);
        for (int i = 1; i < left.size()-1; ++i) {
            left[i] ^= (1LL << 29);
        }
        left[left.size()-1] ^= (1LL << 28);
    }

    for (int i = 0; i < n/2; ++i) {
        cout << right[i] << ' ' << left[i] << ' ';
    }

    if(n%2==1){
        cout << 0 << '\n';
    }else{
        cout << '\n';
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