#include <bits/stdc++.h>

using namespace std;

bool isFullHouse(int a, int b, int c, int d, int e){
    vector<int> V(5);
    V = {a, b, c, d, e};
    sort(V.begin(), V.end());
    if (
        V[0] == V[1] && V[1] == V[2] &&
        V[2] != V[3] && V[3] == V[4]
    ){
        return true;
    }
    if (
        V[0] == V[1] && 
        V[1] != V[2] && V[2] == V[3] && V[3] == V[4]
    ){
        return true;
    }

    return false;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int e = 1; e <= 13; e++){
        if (isFullHouse(a, b, c, d, e)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}