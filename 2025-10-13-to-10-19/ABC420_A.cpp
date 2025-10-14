/*問題文
AtCoder 国では馬のレースが 
N 個開催されています。
i 個目のレースには A(i)
歳以下の馬が出場できます。
N 個のレースのうち、 
K 歳の馬が出場できるレースの個数はいくつですか？
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, count = 0, age;
    cin >> num;
    vector<int> V(num);
    for (int i = 0; i < num; i++){
        cin >> V[i];
    }
    
    // for (int i = 0; i < num; i++){
    //   cout << V[i] << " ";
    // }

    cin >> age;

    for (int i = 0; i < num; i++){
        if (V[i] >= age){
            count += 1;
        }
    }

    cout << count << endl;
}
