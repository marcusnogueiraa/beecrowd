#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, y, z;
    while(cin >> x >> y >> z){
        double p = (x+y+z)/2;
        double a = sqrt(p*(p-x)*(p-y)*(p-z));
        cout << fixed << setprecision(3) << a << " m2" << endl;
    }
}