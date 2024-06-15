#include <iostream>

using namespace std;

int f(int v, int m){
  return v % m;
}

class node{
public:
  int value;
  node* next;
};

int main(){
  int N, M, C, V;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> M >> C;
    node* thash[M] {nullptr};
    for (int k = 0; k < C; k++){
      cin >> V;
      node* newnode = new node();
      newnode->value = V;
      if (thash[f(V, M)] == nullptr) thash[f(V, M)] = newnode;
      else {
        node* atual = thash[f(V, M)];
        while(atual->next != nullptr){
          atual = atual->next;
        }
        atual->next = newnode;
      }

    }

    for (int k = 0; k < M; k++){
      cout << k;
      if (thash[k] == nullptr){
        cout << " ->";
        cout << " \\" << endl;
      } else {
        node* atual = thash[k];
        while (atual != nullptr){
          cout << " -> " << atual->value;
          atual = atual->next;
        }
        cout << " -> \\" << endl;
      }
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1256
// Ranking 00957º, Time 0.134, Submiss Date 26/06/2023 16:31:51 (C++17)