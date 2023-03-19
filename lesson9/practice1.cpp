#include <iostream>
using namespace std;

//max関数の宣言
int max(int x[]);

int main(){
    int num[5];

    cout << "テストの点数を入力してください。" << endl;
    for(int i=0; i<5; i++){
        cin >> num[i];
    }

    int m = max(num);
    cout << "最高点は" << m << "点です。" << endl;
}

//max関数の定義
int max(int x[]){
    int m = x[0];
    for(int i=1; i<5; i++){
        if(m < x[i]){
            m = x[i];
        }
    }
    return m;
}