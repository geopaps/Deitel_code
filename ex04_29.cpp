// Exercise 4.29 
// Find the Three digit Armstrong numbers.

#include <iostream>
#include <iomanip>
using namespace std;

 int main()
 {
	int  a, b, c, i, sum, num; // variables
	int aCube, bCube, cCube;
	i = 100;
	
	cout << "\nThe Armstrong Numbers between 100 and 1000" << endl;
	
	while (i<1000) // loop while all the three digited numbers are checked
	{
		sum = 0;
		num = i; // assign the number to i
		a = num % 10; // get the last digit
		num = num / 10; 
		b = num % 10; // get the middle digit
		c = num/10; // now c has the first digit

		// Calculate the cubes
		aCube = a * a * a; 
		bCube = b * b * b;
		cCube = c * c * c;

		// Calculate the sum of the cubes
		sum = aCube + bCube + cCube;
		
		// check wheter the number is an Armstrong's number
		
		if(sum == i)
			cout << i << endl; // print if it is an Armstrong number
		
		i++; // get the next number to check
	} // end  while
	
} // end main

