#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int di[] = {0, 0, -1, 1};
int dj[] = {1, -1, 0, 0};

int x, y;

const int MAXS = 100;
char mat[MAXS][MAXS];

bool inside(int i, int j){
    return (i >= 0 && i < y && j >= 0 && j < x);
}

bool percurse(int i, int j){
    
    int dr;
    while (true){

        if (!inside(i, j)) return false;
        if (mat[i][j] == '@') return false;
        if (mat[i][j] == '*') return true; 

        if (mat[i][j] != '.'){
            if (mat[i][j] == '^') dr = 2;
            else if (mat[i][j] == '>') dr = 0;
            else if (mat[i][j] == '<') dr = 1;
            else if (mat[i][j] == 'v') dr = 3;

            mat[i][j] = '@';
        }

        i = i + di[dr]; 
        j = j + dj[dr];
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    cin >> x >> y;
    for(int i = 0; i < y; i++) 
        for(int j = 0; j < x; j++)
            cin >> mat[i][j];

    bool isvalid = percurse(0, 0);

    if (isvalid) cout << '*' << endl;
    else cout << '!' << endl;
}