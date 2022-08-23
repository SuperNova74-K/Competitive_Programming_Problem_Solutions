//
// Created by Khaled Waleed on 16-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio
    string s1,s2;
    ll original = 0, known = 0, unknown = 0;
    cin >> s1 >> s2;
    for(char i : s1){
        if( i == '+'){
            original++;
        }else{
            original--;
        }
    }


    for(char i : s2){
        if( i == '+'){
            known++;
        }else if( i == '-'){
            known--;
        }else{
            unknown++;
        }
    }

    ll probability_numerator = 0;
    for (int mask = 0; mask < (1LL << unknown); ++mask) {
        string current;
        for (int i = 0; i < unknown; ++i) {
            if(mask & (1LL<<i)){
                current.push_back('+');
            }else{
                current.push_back('-');
            }
        }
        ll cntr = 0;
        for(char i : current){
            if( i == '+'){
                cntr++;
            }else{
                cntr--;
            }
        }
        if(cntr + known == original){
            probability_numerator++;
        }
    }

    cout << fixed << setprecision(11) << (long double)probability_numerator / (1LL << unknown);

    return 0;
}