#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class Point{
    private:
        double x;
        double y;
    public:
        Point();
        Point (double x, double y);
        Point (const Point& p);
        double getX() const;
        double getY() const;
        double dist(const Point& p);
};

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point (double _x, double _y){
    x = _x;
    y = _y;
}

Point::Point (const Point& p){
    x = p.x;
    y = p.y;
}

double Point:: getX() const{
    return x;
}

double Point:: getY() const{
    return y;
}

double Point::dist (const Point& p){
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

int main (){

    //Mở file
    ifstream fin("points.in");
    ofstream fout("points.out");

    int t;
    fin >> t;

    Point* list = new Point [0];
    double _x, _y;

    for (int i = 0; i < t; i++){
        fin >> _x >> _y;
        Point P_INPUT(_x, _y);
        list[i] = P_INPUT;
        Point p1;
        Point p2(_x , _y);      
        fout << p1.getX() << " " << p1.getY() << endl;
        fout << p2.getX() << " " << p2.getY() << endl;
        fout << p1.dist(p2) << endl;
    }

    delete []list;

    //Đóng file
    fin.close();
    fout.close();

    return 0;
}
