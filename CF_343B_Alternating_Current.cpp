//
// Created by Khaled Waleed on 26-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // Basically, you can solve any 2 signs in a sequence
    // so this for loop keeps removing any 2 signs in a sequence then checks if there is something left
    // if there is , then the answer is no else, yes
    // THIS IS A SLOW SOLUTION BUT IT WORKS

//    string inpt;cin >> inpt;
//    int z = inpt.size() - 1;
//    for (int i = 0; i < z ; ++i) {
//        if(inpt[i]==inpt[i+1]){
//            inpt.erase(i,2);
//            (i != 0) ? i-=2 : i--;
//            z = inpt.size()-1;
//        }
//    }
//    if(inpt.empty()){
//        cout << "Yes";
//    }else{
//        cout << "No";
//    }

    // THIS IS ANOTHER SOLUTION USING STACK , WAY FASTER !
    // Special thanks for https://github.com/debsourav33
    // I learnt that trick from his repo.

    string inpt; cin >> inpt;
    stack<char>stk;
    int z = inpt.size();

    if(z % 2 != 0){
        cout << "No";
        return 0;
    }

    for (int i = 0; i < z; ++i) {
        if(stk.empty()){
            stk.push(inpt[i]);
            continue;
        }

        if(stk.top() == inpt[i]){
            stk.pop();
        }else{
            stk.push(inpt[i]);
        }
    }


    if(stk.empty()){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}