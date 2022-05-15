//
// Created by walid on 5/9/2022.
//

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) ;

using namespace std;

int main() {
    fast;

    string a; cin >>a;
    int upper = 0;

    for(char i : a){
        if(isupper(i)){
            upper++;
        }
    }

    if(upper > (a.size() - upper)){
        for(auto &i: a){
            i = toupper(i);
        }
    }else{
        for(auto &i: a){
            i = tolower(i);
        }
    }

    cout << a;

}