//
// Created by Khaled Waleed on 26-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);

    int t; cin >> t;
    string ye7rk_om_UVA;
    getline(cin,ye7rk_om_UVA);

    while(t--){
        stack<char>stk;
        string inpt;
        getline(cin, inpt);
        
        if(inpt.empty()){
            cout << "No\n";
            continue;
        }

        bool answer = true;

        for (char & i : inpt) {
            if(i == '(' || i == '['){
                stk.push(i);
            }else{
                if(stk.empty()){
                    answer = 0;
                    break;
                }

                if( i == ')' && stk.top() != '(' ){
                    answer = 0;
                    break;
                }else if((i == ']' && stk.top() != '[')){
                    answer = 0;
                    break;
                }
                else{
                    stk.pop();
                }
            }
        }

        if(not stk.empty()){
            answer = false;
        }

        if(answer){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }

    }


    return 0;
}