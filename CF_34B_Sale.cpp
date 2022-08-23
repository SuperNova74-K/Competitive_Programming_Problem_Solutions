//
// Created by Khaled Waleed on 03-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;




int main() {
    fio
    ll n,m,temp; cin >> n >> m;
    priority_queue<int,vector<int>,greater<>>pr;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if(temp < 0){
            pr.push(temp);
        }
    }
    ll sum = 0;
    for (int i = 0; i < m; ++i) {
        if(not pr.empty()){
            sum -= pr.top();
            pr.pop();
        }
    }

    cout << sum;

    return 0;
}