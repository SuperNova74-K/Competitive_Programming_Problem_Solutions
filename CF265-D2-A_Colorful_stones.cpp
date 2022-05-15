//
// Created by walid on 5/12/2022.
//

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;


int main() {
    fast;

    string s,t; cin >> s >> t;
    int counter = 0;

    for (int i = 0; i < t.size(); ++i) {
        if(t[i] == s[counter]){
            counter++;
        }
    }


    cout << ++counter;


}