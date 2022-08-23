//
// Created by Khaled Waleed on 16-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n;cin >> n;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    ll  answer = -LONG_LONG_MAX , sum_odd = 0, sum_even = 0 , first_num_in_even_index = 0;
    for (int i = 0; i < n; ++i) {
        if(i % 2 == 0){
            sum_even += vec[i];
        }else{
            sum_odd += vec[i];
        }
    }
    ll temp;

    if(n %2 == 1) {

        for (int i = 1; i < n; ++i) {
            answer = max(answer, sum_even);


            sum_odd += vec[first_num_in_even_index];
            sum_even -= vec[first_num_in_even_index];



            // switching
            temp = sum_odd;
            sum_odd = sum_even;
            sum_even = temp;

            first_num_in_even_index++;
        }

        answer = max(answer, sum_even);
    }else{
        answer = max(sum_even,sum_odd);
    }

    cout << answer << '\n';

}


int main() {
    fio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}