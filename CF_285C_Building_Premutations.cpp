//
// Created by Khaled Waleed on 04-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n,temp; cin >> n;
    priority_queue<ll>pr;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        pr.push(temp);
    }
    ll answer = 0;
    for (int i = n; i >= 0 ; --i) {
        answer += abs(pr.top() - i);
        pr.pop();
    }
    cout << answer;

    return 0;
}