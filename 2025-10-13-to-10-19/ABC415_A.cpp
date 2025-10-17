/*
問題文
長さ 
N の整数列 
A=(A1,A 2,…,AN) と整数 X が与えられます。
X が A に含まれるか判定してください。

制約
入力は全て整数
1≤N≤100
1≤Ai≤100
1≤X≤100
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, target;
    cin >> N;
    vector<int> V(N);

    for (int i = 0; i < N; i++){
        cin >> V[i];
    }

    cin >> target;

    for (int i = 0; i < N; i++){
        if (V[i] == target){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}