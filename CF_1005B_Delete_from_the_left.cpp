// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 02/Oct/2022 on 08:25:33
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1005B_Delete_from_the_left

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;


int main() {
    fio

    string a,b;
    cin >> a >> b;
    ll s1 = a.size()-1,s2 = b.size()-1;

    while(s1 >=0 && s2 >= 0 && a[s1]==b[s2]){
        s1--;
        s2--;
    }

//    cout << (a.size()-s1) + b.size()-s2;
    cout << s1+s2+2;





    return 0;
}