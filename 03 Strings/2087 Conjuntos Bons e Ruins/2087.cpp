#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

bool ok;

struct TrieNode {
    unordered_map<char, TrieNode*> children;
    bool end;

    TrieNode() {end=false;}
};

struct PrefixTree{

    TrieNode* root;

    PrefixTree(){root = new TrieNode();}

    void insert(string key){
        TrieNode* current_node = root;
        int sz = key.length();
        for (int i = 0; i < sz; i++){
            if (current_node->children[key[i]] == nullptr){
                current_node->children[key[i]] = new TrieNode();
            }
            current_node = current_node->children[key[i]];
            if (current_node->end) ok = false;
        }

        if (current_node->children.size() > 0){
            current_node->end = true;
            ok = false;
        }
        else current_node->end = true;
    }
};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    while(cin >> n){
        if (n == 0) return 0;
        PrefixTree trie;

        ok = true;

        for(int i = 0; i < n; i++){
            string s; 
            cin >> s;
            if (ok) trie.insert(s);
        }

        if (ok){
            cout << "Conjunto Bom" << endl;
        } else {
            cout << "Conjunto Ruim" << endl;
        }

    }
}