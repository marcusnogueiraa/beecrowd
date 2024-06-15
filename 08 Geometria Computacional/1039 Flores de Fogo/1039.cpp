#include <bits/stdc++.h>

using namespace std;

struct Circle {
    int center_x;
    int center_y;
    int radius;
};

double dist(const Circle &c1, const Circle &c2){
    return sqrt(pow(c2.center_x - c1.center_x,2) + pow(c2.center_y - c1.center_y,2));
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int r1, x1, y1, r2, x2, y2;
    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        Circle c1 {x1, y1, r1};
        Circle c2 {x2, y2, r2};

        if (dist(c1, c2) + c2.radius <= c1.radius){
            cout << "RICO" << endl;
        } else {
            cout << "MORTO" << endl;
        }
    }
}
