#include <bits/stdc++.h>

using namespace std;

int n;

struct Point2D{
    int x;
    int y;
};

bool xsort_func(Point2D p1, Point2D p2){
    return p1.x < p2.x;
}

bool ysort_func(Point2D p1, Point2D p2){
    return p1.y > p2.y;
}

double dist(Point2D p1, Point2D p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double closest_brute_force(vector<Point2D>& points){
    double min_dist = 10000;
    for(int i = 0; i < points.size(); i++){
        for(int j = i+1; j < points.size(); j++){
            double point_distance = dist(points[i], points[j]);
            min_dist = min(min_dist, point_distance);
        }
    }

    return min_dist;
}

double closest_pairs_rec(vector<Point2D>& points, int left, int right){
    int mid = (left+right)/2;
    double leftMinDistance = closest_pairs_rec(points, left, mid);
    double rightMinDistance = closest_pairs_rec(points, left, mid);
    double minDistance = min(leftMinDistance, rightMinDistance);
}

double closest_pairs(vector<Point2D>& points){
    sort(points.begin(), points.end(), xsort_func);
    return closest_pairs_rec(points, 0, points.size() - 1);
}

int main(){
    while(cin >> n){
        if (n == 0) break;
        vector<Point2D> points(n);
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            points[i] = {x, y};
        }

        double res = 0.0;
        if (3 >= n){
            res = closest_brute_force(points);
        } else {
            res = closest_pairs(points);
        }
    }
}