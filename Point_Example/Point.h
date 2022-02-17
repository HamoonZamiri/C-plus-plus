#ifndef POINT_H
#define POINT_H

class Point{
    double x, y;
    double get_x();
    double get_y();
    void set_x(double x);
    void set_y(double y);
    // Point operator+ (Point& a, Point& b);
    //ostream& operator<<(ostream& out, const Point& p);
};


#endif