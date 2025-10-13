/*
問題文
高橋君は、AtCoder 語を勉強しています。

高橋君は英単語に対して AtCoder 語の単語を対応させて覚えています。

高橋君は英語における red, blue, green は AtCoder 語ではそれぞれ SSS, FFF, MMM に対応していることを覚えており、他の単語は覚えていません。

英小文字からなる文字列 
S が与えられます。
S が高橋君が AtCoder 語との対応を覚えている英単語の表記と一致しているならば 
S に対応している AtCoder 語の単語を、そうでないならば文字列 Unknown を出力してください。
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    if (s == "red"){
        cout << "SSS" << endl;
    }
    else if (s == "green"){
        cout << "MMM" << endl;
    }
    else if (s == "blue"){
        cout << "FFF" << endl;
    }
    else {
        cout << "Unknown" << endl;
    }

}