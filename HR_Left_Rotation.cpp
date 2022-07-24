//
// Created by Khaled Waleed on 24-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int a,b;
    cin >> a >> b;
    int arr[100005];
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < a-1; ++i) {
        cout << arr[((i+b) % (a))] << ' ';
    }
    cout << arr[((a-1+b) % (a))];

    return 0;
}