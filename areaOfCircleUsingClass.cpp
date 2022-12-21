#include <iostream>

using namespace std;

// Creating a class called Circle
class Circle {
private:
    int radius;

public:
    // Constructor to pass the value of radius
    Circle(int r) {
        radius = r;
    }

    // Setter function to set the private radius to the public radius we got from the constructor
    void setRadius(int radius) {
        this->radius = radius;
    }

    // Helps to access the private instance radius
    int getRadius() {
        return radius;
    }
};

// Class utility to calculate area
class Utility {
public:
    // Passing an object "c" of class Circle to access its functions
    double calculateArea(Circle c) {
        int r = c.getRadius();
        return 3.14 * r * r;
    }
};

int main() {
    int radius;
    cout << "Enter the radius (in cm):" << endl;
    cout << "-> ";
    cin >> radius;

    // Passing the radius taken from the user to the object "c1"
    Circle c1(radius);

    // Creating an object for the Utility class
    Utility u1;

    cout << "Area of the circle is " << u1.calculateArea(c1) << " cm^2" << endl;

    return 0;
}
