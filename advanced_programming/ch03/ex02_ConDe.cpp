#include <iostream>
using namespace std;

class Circle {
public:
    int radius;

    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << radius << "생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << radius << "생성" << endl;
}

Circle::~Circle() {
    cout << radius << "소멸" << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle donut;
    Circle pizza(30);

    return 0;
}