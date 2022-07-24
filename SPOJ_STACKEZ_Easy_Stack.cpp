//
// Created by Khaled Waleed on 24-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t; cin >> t;
    int query;
    stack<int>stk;
    while(t--){
        cin >> query;
        if(query == 1){
            cin >> query;
            stk.push(query);
        }else if (query == 2){
            if( not stk.empty()){
                stk.pop();
            }
        }else if (query == 3){
            if(stk.empty()){
                cout << "Empty!" << '\n';
            }else{
                cout << stk.top() << '\n';
            }
        }
    }


    return 0;
}