//
// Created by Khaled Waleed on 5/17/2022
//


#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);
    unordered_set<char>set;
    for(auto & i : str){
        if(not(i == ' ' || i == '{'|| i == '}' || i == ',')){
            set.insert(i);
        }
    }
    cout << set.size();

    return 0;
}