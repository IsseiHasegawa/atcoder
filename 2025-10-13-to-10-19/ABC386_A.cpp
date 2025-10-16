/*
問題文
4 枚のカードがあり、それぞれのカードには整数 A,B,C,D が書かれています。
ここに 1 枚カードを加え、フルハウスとできるか判定してください。
ただし、 5 枚組のカードは以下の条件を満たすとき、またそのときに限って、
フルハウスであると呼ばれます。
異なる整数 x,y について、 x が書かれたカード 3 枚と y が書かれたカード 2 枚からなる。
*/

/*
解けなかった
isFullHouseの１つ目のifはわかったが2つ目のifがわからなかった。
制約にも注意する必要あり
*/

#include <bits/stdc++.h>

using namespace std;

bool isFullHouse(int a, int b, int c, int d, int e){
    vector<int> card = {a, b, c, d, e};
    sort(card.begin(), card.end());

    if (
        card[0] == card[1] && card[1] == card[2] &&
        card[2] != card[3] &&
        card[3] == card[4]
    ){
        return true;
    }

    if (
        card[0] == card[1] &&
        card[1] != card[2] && card[2] == card[3] && card[3] == card[4]
    ){
        return true;
    }
    return false;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int e = 1; e <= 13; e++){
        if(isFullHouse(a, b, c, d, e)){
            cout << "Yes" << endl;
            return 0;

        }
    }
    cout << "No" << endl;
    return 0;
}