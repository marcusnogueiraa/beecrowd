#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string str;
    while(getline(cin, str)){
        for(int i = 0; i < str.length(); i++){
            if (str[i] == ' ' && (str[i+1] == ',' || str[i+1] == '.')){
                continue;
            }
            cout << str[i];
        }
        cout << endl;
    }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3088
// Ranking 00261º, Time 0.000, Submiss Date 09/06/2023 16:10:28 (C++17)