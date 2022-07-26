//
// Created by Khaled Waleed on 25-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<int>negative;
    deque<int>positive;
    deque<int>zero;
    bool negative_filled = false;
    int t; cin >> t;
    int lol;
    for (int i = 0; i < t; ++i) {
        cin >> lol;
        if ( lol < 0 && not negative_filled) {
            negative.push_back(lol);
            negative_filled = true;
        }
        else{
            zero.push_back(lol);
        }
    }

    std::sort(zero.begin(), zero.end());

    if(zero[zero.size()-1] > 0){
        positive.push_back(zero[zero.size()-1]);
        zero.pop_back();
    }else{
        positive.push_back(zero[0]);
        positive.push_back(zero[1]);

        zero.pop_front();
        zero.pop_front();
    }

    cout << 1 << ' ' << negative[0] << '\n';


    cout << positive.size() << ' ';
    for (int i = 0; i < positive.size()-1; ++i) {
        cout << positive[i] << ' ';
    }

    cout << positive[positive.size()-1] << '\n';

    cout << zero.size() << ' ';
    for (int i = 0; i < zero.size() - 1; ++i) {
        cout << zero[i] << ' ';
    }
    cout << zero[zero.size()-1];

    return 0;
}