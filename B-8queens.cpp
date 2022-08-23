#include <bits/stdc++.h>

using namespace std;

void flipSide(vector<string> &pos){
    for(string position : pos){
        position[1] = char('0' + '9' - position[1]);
    }
}

bool checkOblique(vector<string> pos){
    string arr[] = {"", "", "", "", "", "", "", ""};
    int obPos[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(int num = 0; num < 8; num++){
        arr[num] = pos[num];
    }

    for(int num = 0; num < 8; num++){

        while(arr[num][0] > 'A' && arr[num][1] > '1'){
            arr[num][0] -= 1;
            arr[num][1] -= 1;
        }

        if(arr[num][0] == 'A'){
            if(obPos[8 - int(arr[num][1])] == 1) return false;
            obPos[8 - int(arr[num][1])] += 1;
        }
        else{
            if(obPos[arr[num][0] - 'B' + 8] == 1) return false;
            obPos[arr[num][0] - 'B' + 8] += 1;
        }
    }

    return true;
}


bool check(vector<string> pos){
    int arr2[] = {1, 1, 1, 1, 1, 1, 1, 1};

    for(int num = 0; num < 8; num++){
        if(arr2[int(pos[num][0]) - 'A'] == 0){
            return false;
        }
        else{
            arr2[pos[num][0] - 'A'] = 0;
        }

    }

    for(int j = 0; j < 8; j++){
        arr2[j] = 1;
    }

    for(int num = 0; num < 8; num++){
        if(arr2[pos[num][1] - '1'] == 0){
            return false;
        }
        else{
            arr2[pos[num][1] - '1'] = 0;
        }
    }

    for(int j = 0; j < 8; j++){
        arr2[j] = 1;
    }


    return true;
}


int main(){
    int T, state;
    cin >> T;

    while(T--){
        vector<string>pos(8);
        state = 1;
        for(int i = 0; i < 8; i++){
            cin >> pos[i];
        }

        if(!check(pos)) state = 0;
        if(!checkOblique(pos)) state = 0;

        flipSide(pos);
        if(!checkOblique(pos)) state = 0;

        if(state == 0) {cout << "Invalid" << '\n';}
        else {cout << "Valid" << '\n';}
    }
}