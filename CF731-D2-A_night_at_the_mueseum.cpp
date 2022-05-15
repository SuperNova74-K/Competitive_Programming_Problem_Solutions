//
// Created by walid on 5/11/2022.
//

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) , cin.tie(0), cout(0);

int main(){
    using namespace std;

    string alphabet = "0abcdefghijklmnopqrstuvwxyz";

    int moves = 0;
    string inpt; cin >> inpt;
    inpt = "a" + inpt;
    for (int i = 0; i < inpt.size() - 1; ++i) {
        int first_index = alphabet.find(inpt[i]);
        int second_index = alphabet.find(inpt[i+1]);
        int temp = abs(first_index - second_index);
        int temp2 = 26 - temp;

        moves += (temp >= temp2) ? temp2 : temp;
    }

    cout << moves;



}