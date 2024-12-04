#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>

using namespace std;

namespace PointFunctions {

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }


    friend ostream& operator<<(ostream& os, const Point& point);
};

}

#endif

