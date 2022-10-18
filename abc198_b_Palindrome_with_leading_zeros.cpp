// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 27/Sep/2022 on 16:37:45
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem abc198_b_Palindrome_with_leading_zeros

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;


int main() {
    fio

    string lol;
    cin >> lol;
    string after;
    ll indx = lol.size()-1;
    while(indx>=0 && lol[indx] == '0'){
        indx--;
    }
    after = lol.substr(0,indx+1);
    string reversed = after;
    std::reverse(reversed.begin(), reversed.end());
    if(after == reversed){
         cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}