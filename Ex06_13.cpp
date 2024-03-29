// Exercise 6.13 Solution: Ex06_13.cpp
// Rounding numbers using ceil.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double roundToIntegers( double ); // function prototype

int main()
 {
   double x; // current input
   double y; // current input rounded

   cout << fixed; // set floating-point number format

  // loop for 5 inputs
   for ( int loop = 1; loop <= 5; loop++ )
   {
     cout << "Enter a number: ";
     cin >> x;

     y = roundToIntegers( x ); // y holds rounded input
     cout << setprecision( 6 ) << x << " rounded is "
      << setprecision( 1 ) << y << endl;
    } // end for
 
   return 0;

 } // end main

 // roundToIntegers rounds 5 inputs
 double roundToIntegers( double value )
 {
     return ceil( value + .5 );
 } // end function roundToIntegers
