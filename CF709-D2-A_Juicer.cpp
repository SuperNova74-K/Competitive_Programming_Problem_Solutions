//
// Created by walid on 5/15/2022.
//

#include <bits/stdc++.h>

int main(){
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n,b,d; cin >> n >> b >> d;
    int counter = 0;
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        int temp; cin >> temp;
        if(temp > b){
            continue;
        }
        counter += temp;
        if(counter > d){
            answer++;
            counter = 0;
        }
    }

    cout << answer;

    return 0;
}
