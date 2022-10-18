//
// Created by Khaled Waleed on 23-Jul-22
//

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n; cin >> n;
    ll copy = n;

    priority_queue<ll>pr;

    ll temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if(temp == copy){
            pr.push(copy);
            while(not pr.empty() && pr.top() == copy){
                cout << pr.top() << ' ';
                pr.pop();
                copy--;
            }
        }else{
            pr.push(temp);
        }
        cout << '\n';
    }

    return 0;
}