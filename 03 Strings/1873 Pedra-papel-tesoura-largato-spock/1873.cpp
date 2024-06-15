# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  string rajesh;
  string sheldon;
  for (int i = 0; i < cases; i++){
    cin >> rajesh >> sheldon;
    if (rajesh == sheldon) cout << "empate" << endl;
    else if (rajesh == "tesoura" and sheldon == "papel") cout << "rajesh" << endl;
    else if (rajesh == "papel" and sheldon == "pedra") cout << "rajesh" << endl;
    else if (rajesh == "pedra" and sheldon == "lagarto") cout << "rajesh" << endl;
    else if (rajesh == "lagarto" and sheldon == "spock") cout << "rajesh" << endl;
    else if (rajesh == "spock" and sheldon == "tesoura") cout << "rajesh" << endl;
    else if (rajesh == "tesoura" and sheldon == "lagarto") cout << "rajesh" << endl;
    else if (rajesh == "lagarto" and sheldon == "papel") cout << "rajesh" << endl;
    else if (rajesh == "papel" and sheldon == "spock") cout << "rajesh" << endl;
    else if (rajesh == "spock" and sheldon == "pedra") cout << "rajesh" << endl;
    else if (rajesh == "pedra" and sheldon == "tesoura") cout << "rajesh" << endl;
    
    else if (sheldon == "tesoura" and rajesh == "papel") cout << "sheldon" << endl;
    else if (sheldon == "papel" and rajesh == "pedra") cout << "sheldon" << endl;
    else if (sheldon == "pedra" and rajesh == "lagarto") cout << "sheldon" << endl;
    else if (sheldon == "lagarto" and rajesh == "spock") cout << "sheldon" << endl;
    else if (sheldon == "spock" and rajesh == "tesoura") cout << "sheldon" << endl;
    else if (sheldon == "tesoura" and rajesh == "lagarto") cout << "sheldon" << endl;
    else if (sheldon == "lagarto" and rajesh == "papel") cout << "sheldon" << endl;
    else if (sheldon == "papel" and rajesh == "spock") cout << "sheldon" << endl;
    else if (sheldon == "spock" and rajesh == "pedra") cout << "sheldon" << endl;
    else if (sheldon == "pedra" and rajesh == "tesoura") cout << "sheldon" << endl;

  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1873
// Ranking 01325º, Time 0.000, Submiss Date 24/04/2023 02:18:17 (C++17)