//
// Created by walid on 5/10/2022.
//


#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main() {
    using namespace std;
    fast;


    int n, police = 0, un_treated = 0; cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp; cin >> temp;

        if(temp != -1){
            police+= temp;
        }else{
            if(police == 0){
                un_treated++;
            }else{
                police--;
            }
        }
    }
    cout << un_treated;

}
