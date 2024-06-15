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
int orientation(const Point2D<T> &a, const Point2D<T> &b, const Point2D<T> &c) {
    T result = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
    if (result < 0) return -1; // cw
    else if (result > 0) return 1; // ccw
    return 0; // collinear
}
 
template <typename T>
vector<Point2D<T>> monotone_chain(vector<Point2D<T>> &points, bool include_collinear = false){
    if (points.size() == 1){
        return points;
    }
 
    sort(points.begin(), points.end());
    int n = points.size();
    Point2D<T> P0 = points[0], PN = points.back();
 
    if (include_collinear){
        for(int i = 1; i < n-1; i++){
            if (!collinear(P0, points[i], PN)) break;
        
            if (i + 1 == n - 1){
                vector<Point2D<T>> hull {points};
                reverse(hull.begin(), hull.end());
                return hull;
            }
        }
    }
 
    vector<Point2D<T>> up, down;
    up.push_back(P0);
    down.push_back(P0);
 
    for(int i = 1; i < n; i++){
        if (i == n - 1 || cw(P0, points[i], PN, include_collinear)){
            while(up.size() >= 2 && !cw(up[up.size() - 2], up.back(), points[i], include_collinear)){
                up.pop_back();
            }
            up.push_back(points[i]);
        }
 
        if (i == n - 1 || ccw(P0, points[i], PN, include_collinear)){
            while(down.size() >= 2 && !ccw(down[down.size() - 2], down.back(), points[i], include_collinear)){
                down.pop_back();
            }
            down.push_back(points[i]);
        }
    }
 
    vector<Point2D<T>> convex_hull {up};
    for(int i {(int) down.size() - 2}; i > 0; i--){
        convex_hull.push_back(down[i]);
    }
 
    return convex_hull;
}

int n;

int main(){    
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> n){
        if (n == 0) break;
        vector<Point2D<int>> points(n), hull;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            points[i] = {x, y};
        }
        set<Point2D<int>> set_points(points.begin(), points.end());
        int count = 0;
        while(points.size() > 0){
            hull = {monotone_chain(points, true)};
            for(auto p : hull){
                if (set_points.count(p)) set_points.erase(p);
            }
            points = vector<Point2D<int>>(set_points.begin(), set_points.end());
            count++;
        }
        if (count % 2 == 0) cout << "Do not take this onion to the lab!" << endl;
        else cout << "Take this onion to the lab!" << endl;
    }
}