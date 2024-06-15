#include <iostream>

using namespace std;

class Node{
public:
  char value;
  Node* right {nullptr};
  Node* left {nullptr};

  Node(int value){
    this->value = value;
  }
};

class BinaryTree{
public:
  Node* root {nullptr};
  char menor = 'z';

  bool search(Node* crt, int val){
    if (crt == nullptr || crt->value == val) return crt;
    if (val < crt->value) return search(crt->left, val);
    return search(crt->right, val);
  }

  void prefix(Node* nd){
    if (nd == nullptr){
      return;
    }
    if (nd->value == root->value){
        cout << nd->value;
    } else {
        cout << " " << nd->value;
    }
    prefix(nd->left);
    prefix(nd->right);
  }

  void infix(Node* nd){
    if (nd == nullptr){
      return;
    }

    infix(nd->left);
    if (nd->value == menor){
        cout << nd->value;
    } else {
        cout << " " << nd->value;
    }
    infix(nd->right);
  }

  void posfix(Node* nd){
    if (nd == nullptr){
      return;
    }

    posfix(nd->left);
    posfix(nd->right);

    if (nd->value == root->value){
        cout << nd->value;
    }
    else {
        cout << nd->value << " ";
    }
  }

  void add(char value){
    Node* nw_nd = new Node(value);

    if (value < menor){
        menor = value;
    }

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
  string line;
  BinaryTree bt;
  while (getline(cin, line)){
    if (line.size() <= 4){
      if (line[0] == 'I'){
        bt.add(line[2]);
      } else {
        bool exist = bt.search(bt.root, line[2]);
        if (exist) cout << line[2] << " existe\n";
        else cout << line[2] << " nao existe\n";
      }
    } else {
      if (line[0] == 'P' && line[1] == 'R'){
        bt.prefix(bt.root);
      } else if (line[0] == 'I' || line[1] == 'N'){
        bt.infix(bt.root);
      } else {
        bt.posfix(bt.root);
      }
      cout << endl;
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1200
// Ranking 01232º, Time 0.000, Submiss Date 27/06/2023 14:09:05 (C++17)