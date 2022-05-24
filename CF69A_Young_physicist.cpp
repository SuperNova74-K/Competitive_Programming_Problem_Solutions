//
// Created by walid on 5/20/2022.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int sumx=0,sumy=0,sumz=0,temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        sumx += temp;
        cin >> temp;
        sumy += temp;
        cin >> temp;
        sumz += temp;
    }

    if(sumx == 0 && sumy == 0 && sumz == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}