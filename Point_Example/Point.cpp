#include <iostream>

using namespace std;

class Point{


    public:
        double x, y;
        double get_x(){
            return x;
        }
        double get_y(){
            return y;
        }
        void set_x(double num) {this->x = num;}
        void set_y(double num){
            y = num;
        }

        //overloading section
        //both cases of operating overloading


    friend ostream& operator<< (ostream& out, const Point& p);
    friend Point operator+(Point& a, Point& b);
};
    ostream& operator<<(ostream& out, const Point& p){
            out << "(" << p.x << ", " << p.y << ")";
            return out;
        }

    Point operator+(Point& a, Point& b){
            Point sum;
            sum.set_x(a.get_x() + b.get_x());
            sum.set_y(a.get_y() + b.get_y());
            return sum;
        }

int main(){
        Point a;
        a.set_x(1);
        a.set_y(2);

        Point b;
        b.set_x(2);
        b.set_y(3);
        cout << "Point a: " << a << endl;
        std::cout << "Point b: " << b << endl;
        cout << "Point a + b = " << (a + b) << endl;

        return 0;
    }