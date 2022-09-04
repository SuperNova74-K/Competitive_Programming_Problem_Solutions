// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 03/Sep/2022 on 15:01:28
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_681C_Heap_Operations

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;


int main() {
    fio
    priority_queue<ll, vector<ll>, greater<>>pr;
    ll n; cin>> n;
    ll temp;
    string lol;
    ll cntr = 0;
    stringstream yaaay;
    for (int i = 0; i < n; ++i) {
        cin >> lol;
        if(lol[0] == 'i'){
            cin >> temp;
            pr.push(temp);
            yaaay << "insert " << temp << '\n';
            cntr++;

        }else if(lol[0] == 'r'){
            if(not pr.empty()){
                pr.pop();
            }else{
                yaaay<< "insert 1\n";
                cntr++;
            }
            yaaay << "removeMin\n";
            cntr++;

        }else{
            cin >> temp;
            if((!pr.empty()) && pr.top() == temp){
                yaaay<< "getMin " << temp << '\n';
                cntr++;
            }else {
                while (pr.empty() || pr.top() != temp) {
                    if (not pr.empty() && pr.top() < temp) {
                        yaaay << "removeMin\n";
                        cntr++;
                        pr.pop();
                    } else {
                        yaaay << "insert " << temp << '\n';
                        cntr++;
                        pr.push(temp);
                    }
                }
                yaaay << "getMin " << temp << '\n';
                cntr++;
            }
        }
    }
//    string ok = yaaay.str();
    cout << cntr << '\n' << yaaay.str();
    return 0;
}