#include <iostream>
#include <vector>

using namespace std;

vector<int> pre;
vector<int> pos;
vector<int> inf;

class Node{
public:
  int value;
  Node* right {nullptr};
  Node* left {nullptr};

  Node(int value){
    this->value = value;
  }
};

class BinaryTree{
public:
  Node* root {nullptr};

  void percurse(Node* nd){
    if (nd == nullptr){
      return;
    }
    
    pre.push_back(nd->value);
    percurse(nd->left);
    inf.push_back(nd->value);
    percurse(nd->right);
    pos.push_back(nd->value);
  }

  void add(int value){
    Node* nw_nd = new Node(value);

    if (this->root == nullptr){
      this->root = nw_nd;
      return;
    }

    Node* cr_nd = this->root;
    while (true){
      if (value < cr_nd->value){
        if (cr_nd->left == nullptr){
          cr_nd->left = nw_nd;
          return;
        }
        cr_nd = cr_nd->left;
      }
      if (value > cr_nd->value){
        if (cr_nd->right == nullptr){
          cr_nd->right = nw_nd;
          return;
        }
        cr_nd = cr_nd->right;
      }
    }
  }
};

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int cases, tam, val;
  cin >> cases;
  for (int k = 0; k < cases; k++){
    BinaryTree bt;
    cin >> tam;
    for (int i = 0; i < tam; i++){
      cin >> val;
      bt.add(val);
    }

    cout << "Case " << k+1 << ":\n";
    bt.percurse(bt.root);

    cout << "Pre.:";
    for (int i = 0; i < pre.size(); i++){
      cout << " " << pre[i];
    }
    cout << endl;
    cout << "In..:";
    for (int i = 0; i < inf.size(); i++){
      cout << " " << inf[i];
    }
    cout << endl;
    cout << "Post:";
    for (int i = 0; i < pos.size(); i++){
      cout << " " << pos[i];
    }
    cout << endl;
    cout << endl;
    pre.clear();
    inf.clear();
    pos.clear();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1076
// Ranking 01853º, Time 0.423, Submiss Date 27/06/2023 11:50:53 (C++17)