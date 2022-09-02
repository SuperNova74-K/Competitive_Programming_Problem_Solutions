// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 02/Sep/2022 on 15:39:36
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_26_B_Regular_Bracket_Sequence
// We make a counter to keep calculating the number of opened brackets
// then we try to close them , if possible then sure do it
// if not then the answer(the amount of stuff removed) is incremented by one
// then if we reached the end and still there is open brackets which were not closed
// then we add them to the answer
// the real answer is the length of the string - answer

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    string s; cin >> s;
    ll cntr = 0, answer = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == '('){
            cntr++;
        }else{
            if(cntr){
                cntr--;
            }else{
                answer++;
            }
        }
    }
    answer += cntr;
    cout << s.size() - answer;
    return 0;
}