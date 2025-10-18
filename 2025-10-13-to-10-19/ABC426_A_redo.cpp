#include <bits/stdc++.h>

using namespace std;

int main(){
    string A, B;
    cin >> A >> B;
    if (A == "Serval"){
        if (B == "Ocelot" || B == "Serval"){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else if (A == "Ocelot"){
        if (B == "Ocelot"){
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