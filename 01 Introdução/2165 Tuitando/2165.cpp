#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  getline(cin, name);

  if (name.length() <= 140)
  {
    cout << "TWEET" << endl;
  }
  else
  {
    cout << "MUTE" << endl;
  }
  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2165
// Ranking 02827º, Time 0.000, Submiss Date 01/04/2023 21:15:13 (C++17)