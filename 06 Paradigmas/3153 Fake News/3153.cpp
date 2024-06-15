#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

const int ALPHASIZE = 26;
const char NORM = 'a';

struct Trie {
    vector<vector<int>> to;
    vector<int> end, pref;

    Trie(){
        to = {vector<int>(ALPHASIZE)};
        end = {0}, pref = {0};
    }

    void insert(string s){
        int x = 0;
        for (auto ch : s){
            int &next = to[x][ch - NORM];
            if (!next){
                next = to.size();
                to.push_back(vector<int>(ALPHASIZE));
                end.push_back(0), pref.push_back(0);
            }
            x = next, pref[x]++;
        }
        end[x]++;
    }

	int find(string s) {
		int x = 0;
		for(auto ch : s) {
			x = to[x][ch-NORM];
			if(!x) return 0;
		}
		return x;
	}

	int count_pref(string s) {
		return pref[find(s)];
	}

};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;

    Trie trie;

    for(int i = 0; i < n; i++){
        string a, b; cin >> a >> b;
        if (a == "add") trie.insert(b);
        else{
            cout << trie.count_pref(b) << endl;
        }
    }
}