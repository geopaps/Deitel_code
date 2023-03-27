// Exercise 6.19 Solution: Ex06_19.cpp
// Calculate the diagonal of a rectangle
// given values for two sides.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double diagonal( double, double ); // function prototype

 int main()
 {
   double length; // value for first side
   double width; // value for second side

    cout << fixed; // set floating-point number format

     // loop 3 times
     for ( int i = 1; i <= 3; i++ )
     {
	    cout << "\nEnter 2 sides of rectangle: ";
        cin >> length >> width;

         // calculate and display hypotenuse value
        cout << "Diagonal: " << setprecision( 1 )
           << diagonal( length, width ) << endl;
      } // end for
 
 return 0;
 } // end main

    // diagonal calculates value of diagonal of
 // a rectangle given two side values
 double diagonal( double l, double w )
 {
	  return sqrt( l * l + w * w );
 } // end function diagonal

