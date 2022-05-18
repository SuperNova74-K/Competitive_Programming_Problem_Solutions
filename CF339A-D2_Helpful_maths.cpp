//
// Created by Khaled Waleed on 5/17/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>vec;
    string input; cin >> input;
    string str;
    for (auto i : input) {
        if(i != '+'){
            str.push_back(i);
        }
    }
    std::sort(str.begin(), str.end());
    int counter = 0;
    for (int i = 0; i < input.size(); i+=2) {
        input[i] = str[counter];
        counter++;
    }

    cout << input;
    return 0;
}