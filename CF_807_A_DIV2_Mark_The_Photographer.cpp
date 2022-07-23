//
// Created by Khaled Waleed on 15-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        priority_queue<int>first;
        int temp;
        for (int i = 0; i < n*2; ++i) {
            cin >> temp;
            first.push(temp);
        }
        priority_queue<int>second;
        for (int i = 0; i < n; ++i) {
            second.push(first.top());
            first.pop();
        }
        bool condition = true;
        for (int i = 0; i < n && condition; ++i) {
            if(second.top() - first.top() >= x){
                first.pop();
                second.pop();
                condition = true;
            }else{
                condition = false;
            }
        }
        cout << (condition ? "YES" : "NO") << '\n';
    }

    return 0;
}