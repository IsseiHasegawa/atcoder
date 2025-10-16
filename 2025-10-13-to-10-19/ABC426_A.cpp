/*
問題文
ある OS のバージョンは古い順に "Ocelot", "Serval", "Lynx" です。
バージョン X がバージョン Y 以降のバージョンであるか判定してください。
なお、バージョン X 自身もバージョン X 以降のバージョンであるものとします。

制約
X,Y は "Ocelot", "Serval", "Lynx" のいずれか (引用符を含まない)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string X, Y;
    cin >> X >> Y;
    if (X == "Serval"){
        if (Y == "Ocelot" || Y == "Serval"){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else if (X == "Ocelot"){
        if (Y == "Ocelot"){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "Yes" << endl;
    }

    return 0;

}