// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 28/Sep/2022 on 13:06:20
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem 1242A_Tile_Painting

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;

template<typename generic, typename also_generic>
long double maxof(generic a, also_generic b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

template<typename lol>
vector<lol> divisorsof(lol num){
    vector<lol>answer(1);
    answer[0]=1;
    for (__int128 i = 2; i*i <= num; ++i) {
        if(num%i==0){
            answer.push_back(i);
            if(i != num/i){
                answer.push_back(num/i);
            }
        }
    }
    answer.push_back(num);
    return answer;
}

int main() {
    fio
    ll n;cin >> n;
    vector<ll>divisors = divisorsof(n);
    std::sort(divisors.begin(), divisors.end());
    ll answer = 0;
    for (int i = 1; i < divisors.size()-1 ; ++i) {
        if((n/divisors[i]) & 1){
            ll temp_answer = 0;
            temp_answer += divisors[i];
            temp_answer += (((n/divisors[i])-1)/2)*divisors[i];
            answer = maxof(answer, temp_answer);

        }else{
            answer = maxof(answer,n/divisors[i]);
        }
    }

    if(answer == 0){
        answer = n;
    }
    cout << answer;
    return 0;
}