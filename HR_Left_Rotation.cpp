//
// Created by Khaled Waleed on 24-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//
//    int a,b;
//    cin >> a >> b;
//    int arr[100005];
//    for (int i = 0; i < a; ++i) {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < a-1; ++i) {
//        cout << arr[((i+b) % (a))] << ' ';
//    }
//    cout << arr[((a-1+b) % (a))];
//
//    return 0;
//}


// another solution ... (slower by almost 73 ms )
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,d; cin >> n >> d;

    deque<int>dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }

    for (int i = 0; i < d; ++i) {
        dq.push_back(dq.front());
        dq.pop_front();
    }

    for (int i = 0; i < n-1; ++i) {
        cout << dq[i] << ' ';
    }
    cout << dq[n-1];
    return 0;
}