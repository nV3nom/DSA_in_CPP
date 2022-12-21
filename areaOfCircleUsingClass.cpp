#include<iostream>
using namespace std;

//creating a class circle 
class Circle {

    //private attribute radius
    private:
        int radius;

    public:
    //constructur to pass the value of radius
     Circle(int r){
        radius=r;
    }

    /*setter function to set class instance private radius to 
    public radius we got from constructor*/
    void setRadius(int radius){
         this->radius= radius;
    }

    // helps to acess private instance radius
    int getRadius(){
        return radius;
    }
          
};

//class utility to calculate area
class Utility{

    public:

    //passing object "c of class Circle " to acess it's functions 
    double calculateArea(Circle c){
        int r= c.getRadius();

        return 3.14*r*r;
        /*int area = 3.14*(r*r);
        return area;
        */
    }
};

 int main(){
    int radius;
    cout<<"Enter the radious(in cm) \n";
    cout<<"-> ";
    cin>> radius;

    //passing radius taken from user to obj "c1"
    Circle c1(radius);

    //creating obj for utility class 
    Utility u1;

    cout<<"area of the circle is "

    /*c1 obj is passed which will return radius using 
        getter*/
    <<u1.calculateArea(c1)
    <<"cm^2"<<endl;

    return 0;
 }
