// Exercise 6.50 Solution: Ex06_50.cpp
// Use inline function to calculate circle perimeter.
 #include <iostream>
 using namespace std;

double pi = 3.14159; // global variable

// perimeter is inline function that returns circumference of circle
 inline double perimeter( double r )
 {
    return 2 * pi * r; // return area
 } // end function perimeter

 int main()
 {
	double radius; // user entered radius
	 // prompt for radius
      cout << "Enter the radius of the circle: ";
      cin >> radius;

 // calculate and display circumference of circle
     cout << "The perimeter of the circle is " << perimeter( radius ) << endl;
     
 } // end main

