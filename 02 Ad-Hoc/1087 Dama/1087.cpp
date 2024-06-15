# include <iostream>
# include <math.h>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    while (x1 != 0 or y1 != 0 or x2 != 0 or y2 != 0){
      int distance_x = sqrt(pow(x2-x1, 2));
      int distance_y = sqrt(pow(y2-y1, 2));
      if (distance_x == 0 and distance_y == 0) cout << "0\n";
      else if (distance_x == distance_y or distance_x == 0 or distance_y == 0) cout << "1\n";
      else cout << "2\n";
      cin >> x1 >> y1 >> x2 >> y2;
    }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1087
// Ranking 03446º, Time 0.007, Submiss Date 19/05/2023 11:06:09 (C++17)