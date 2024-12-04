#include "Functions.hpp"

using namespace std;

namespace PointFunctions {

ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.getX() << ", " << point.getY() << ")";
    return os;
}

}
