//
// Created by walid on 5/9/2022.
//
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) ;

using namespace std;

int main() {
    fast;

    long double a,b,c,x;cin >> a >> b >> c >> x;

    if(x <= a && x < b){
        cout << (long double) 1;
    }else if(x > a && x <= b){
        cout << c / (b-a);
    }else{
        cout << (long double) 0;
    }


}
