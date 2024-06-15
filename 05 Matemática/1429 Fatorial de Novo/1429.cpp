#include <iostream>

using namespace std;

int chartodec(char chr){
    return chr - '0';
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string acm;
    cin >> acm;
    int fatorial[] = {1, 2, 6, 24, 120};
	  while(acm != "0"){
        int dec = 0;
        for(int i = 0; i < acm.length(); i++){ 
            dec += fatorial[acm.length()-i-1] * chartodec(acm[i]); 
        }
        cout << dec << endl;
        cin >> acm;
    }

}

// https://www.beecrowd.com.br/judge/pt/problems/view/1429
// Ranking 00584º, Time 0.161, Submiss Date 09/06/2023 12:49:36 (C++17)