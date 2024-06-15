#include <bits/stdc++.h>
 
#define endl '\n'
#define ll long long
#define cw(a,b,c,i) (orientation(a,b,c) == -1 || (i && orientation(a,b,c) == 0))
#define ccw(a,b,c,i) (orientation(a,b,c) == 1 || (i && orientation(a,b,c) == 0))
#define collinear(a,b,c) (orientation(a,b,c) == 0)
 
using namespace std;
 
template <typename T>
struct Point2D {
    T x;
    T y;
 
    Point2D() = default;
 
    Point2D(T x, T y){
        this->x = x;
        this->y = y;
    } 
 
    bool operator<(const Point2D &other) const{
        if (this->x == other.x){
            return this->y < other.y;
        }
        return this->x < other.x;
    }
};

template <typename T>
double dist(const Point2D<T> &p1, const Point2D<T> &p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

template <typename T>
int orientation(const Point2D<T> &a, const Point2D<T> &b, const Point2D<T> &c) {
    T result = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
    if (result < 0) return -1; // cw
    else if (result > 0) return 1; // ccw
    return 0; // collinear
}
 
template <typename T>
double monotone_chain(vector<Point2D<T>> &points, bool include_collinear = false){
    list<double> dist_up, dist_down;
 
    sort(points.begin(), points.end());
    int n = points.size();
    Point2D<T> P0 = points[0], PN = points.back();
 
    vector<Point2D<T>> up, down;
    up.push_back(P0);
    down.push_back(P0);

    for(int i = 1; i < n; i++){
        if (i == n - 1 || cw(P0, points[i], PN, include_collinear)){
            while(up.size() >= 2 && !cw(up[up.size() - 2], up.back(), points[i], include_collinear)){
                up.pop_back();
                dist_up.pop_back();
            }
            double d = dist(up.back(), points[i]);
            dist_up.push_back(d);
            up.push_back(points[i]);
        }
 
        if (i == n - 1 || ccw(P0, points[i], PN, include_collinear)){
            while(down.size() >= 2 && !ccw(down[down.size() - 2], down.back(), points[i], include_collinear)){
                down.pop_back();
                dist_down.pop_back();
            }
            double d = dist(down.back(), points[i]);
            dist_down.push_back(d);
            down.push_back(points[i]);
        }
    }
 
    double tot = 0;
    for(auto d : dist_up) tot += d;
    for(auto d : dist_down) tot += d;
    
 
    return tot;
}
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
 
    int n;
    while(cin >> n){
        if (n == 0) return 0;
        vector<Point2D<ll>> points(n);
 
        for(int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            points[i] = {x, y};
        }
    
        double tot {monotone_chain(points, false)};
        cout << "Tera que comprar uma fita de tamanho " << fixed << setprecision(2) << tot << "." << endl;
    }
 
}   