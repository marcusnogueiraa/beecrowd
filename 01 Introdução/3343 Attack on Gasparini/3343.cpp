# include <iostream>
# include <vector>

using namespace std;

class Checkpoint {
public:
    char atual_checkpoint;
    int checkpoint_p;
    int checkpoint_m;
    int checkpoint_g;

public:
    Checkpoint(){
      this->checkpoint_p = 0;
      this->checkpoint_m = 0;
      this->checkpoint_g = 0;
    }

    void set_checkpoint(char tam){
      if (tam == 'P'){
        this->atual_checkpoint = 'P';
      } else if (tam == 'M'){
        this->atual_checkpoint = 'M';
      } else {
        this->atual_checkpoint = 'G';
      }
    }

    int get_checkpoint(){
      if (atual_checkpoint == 'P'){
        return checkpoint_p;
      } else if (atual_checkpoint == 'M'){
        return checkpoint_m;
      } else {
        return checkpoint_g;
      }
    }

    void inc_checkpoint(){
      if (atual_checkpoint == 'P'){
        checkpoint_p++;
      } else if (atual_checkpoint == 'M'){
        checkpoint_m++;
      } else {
        checkpoint_g++;
      }
    }
};

int main(){
  int num_t, tam_m;
  int P, M, G;
  int muralhas = 1;
  cin >> num_t >> tam_m;
  string sequencia;
  cin >> sequencia;
  cin >> P >> M >> G;

  vector<int> vetor_muralhas = {tam_m};
  
  Checkpoint cpt;

  int titan_atual;

  for (int i = 0; i < num_t; i++){
    if (sequencia[i] == 'P') titan_atual = P;
    if (sequencia[i] == 'M') titan_atual = M;
    if (sequencia[i] == 'G') titan_atual = G;
    cpt.set_checkpoint(sequencia[i]);

    while (titan_atual > vetor_muralhas[cpt.get_checkpoint()]){
      cpt.inc_checkpoint();
      if (cpt.get_checkpoint() > muralhas -1){
        vetor_muralhas.push_back(tam_m);
        muralhas += 1;
      }
    }

    vetor_muralhas[cpt.get_checkpoint()] -= titan_atual;
  }

  cout << muralhas << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3342
// Ranking 00043º, Time 0.013, Submiss Date 16/04/2023 18:05:06 (C++17)