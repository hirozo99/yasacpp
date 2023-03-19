#include <iostream>
using namespace std;

//length関数の宣言
int length(char* str);

int main(){
    char str[100];
    cout << "文字列を入力してください。" << endl;
    cin >> str;
    int ln = length(str);
    cout << "文字列の長さは" << ln << "です。" << endl;

    return 0;
}

//length関数の定義
int length(char* str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}