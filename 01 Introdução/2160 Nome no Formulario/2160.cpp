#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  getline(cin, name);

  if (name.length() <= 80)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2160
// Ranking 02223º, Time 0.000, Submiss Date 01/04/2023 21:11:55 (C++17)