#include <iostream>
#include <iomanip> 

using namespace std;
 
int main() {
 double raio;
 cin >> raio;
 cout << "A=" << fixed << setprecision(4) << raio*raio*3.14159 << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1002
// Ranking 72760º, Time 0.000, Submiss Date 16/03/2023 23:31:35 (C++17)