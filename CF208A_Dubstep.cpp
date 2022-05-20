//
// Created by Khaled Waleed on 5/19/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string inpt; cin >> inpt;

    for (int i = 0; i < inpt.size(); ++i) {
        if(inpt[i]=='W') {
            if (inpt[i + 1] == 'U') {
                if (inpt[i + 2] == 'B') {
                    inpt.erase(i, 3);

                    if(inpt[i-1] != ' ') {
                        inpt.insert(inpt.begin() + i , ' ');
                    }
                    i--;
                }
            }
        }
    }
    if(inpt[0]== ' '){
        inpt.erase(inpt.begin());
    }
    cout << inpt;
    return 0;
}