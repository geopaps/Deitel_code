// Exercise 4.30 
// Calculate the diameter, area and volume of a cylinder.

#include <iostream>
#include <iomanip>
using namespace std;

 int main()
 {
	double radius, height; // input radius
       double pi = 3.14159; // value for pi
	
	// get radius value
	 cout << "Enter the radius: ";
	 cin >> radius;

	 // get height value
	 cout << "Enter the height: ";
	 cin >> height;
    
	 // compute and display diameter
     cout << "The diameter is " << radius * 2.0;

     // compute and display area
     cout << "\nThe area is " << pi * radius * radius << endl;

	 // compute and display volume
     cout << "\nThe volume is " << pi * radius * radius * height << endl;
  } // end main
