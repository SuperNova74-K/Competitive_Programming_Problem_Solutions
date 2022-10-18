//
// Created by Khaled Waleed on 07-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll theta(ll x){
    return (x >= 0);
}

int main() {
    fio
    ll n; cin >> n;
    vector<ll>positives;
    vector<ll>negatives;
    ll answer = 0, first , second;
    for (int i = 0; i < n; ++i) {
        cin >> first >> second;
        if(first >= 0){
            positives.push_back(second);
        }else{
            negatives.push_back(second);
        }
    }
    std::sort(positives.begin(), positives.end());
    std::sort(negatives.begin(), negatives.end());

    ll second_n, argument; cin >> second_n;
    for (int i = 0; i < second_n; ++i) {
        cin >> argument;
        answer = 0;
//        if(argument >=0) {
//            ll num_posi = lower_bound(positives.begin(), positives.end(), argument) - positives.begin();
//            answer += max(0LL, num_posi - (ll) positives.size());
            ll num_posi2 = upper_bound(positives.begin(), positives.end(), argument) - positives.begin();
            if(num_posi2 >= positives.size()){
                answer += positives.size();
            }else{
                answer += num_posi2;
            }
//        }else{
            argument*=-1;
            ll num_posi3 = upper_bound(negatives.begin(), negatives.end(), argument) - negatives.begin();
            if(num_posi3 >= negatives.size()){
                answer += negatives.size();
            }else{
                answer += num_posi3;
            }
        cout << answer << '\n';
    }

    return 0;
}