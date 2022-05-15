//
// Created by walid on 5/12/2022.
//

// THIS IS MY SOLUTION


// There is a better solution here : https://codeforces.com/contest/9/submission/156895923

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;


int main() {
    fast;


    int a,b; cin >> a >> b;
    a = max(a,b);
    int nuemerator  = 7-a;

    if(nuemerator  == 2 ||nuemerator  == 3|| nuemerator  == 6){
        cout << 1 << "/" << 6/nuemerator;
    }else if(nuemerator  == 4 ){
        cout << 2 << "/" << 3;
    }
    else{
        cout << nuemerator << "/" << 6;
    }
}