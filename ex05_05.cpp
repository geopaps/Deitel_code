// Exercise 5.5 
// Total and average of a sequence of integers.


#include <iostream>
#include <iomanip>
using namespace std;

 int main()
 {
	
	int total = 0; // current total
	int number; // number of values
	int value; // current value

	// display prompt
	cout << "Enter the number of values to be summed "
	<< "followed by the values: \n";
	 cin >> number; // input number of values

	// loop number times
	for (int i = 1; i <= number; i++ )
	{
	cin >> value;
	total += value;
	} // end for

 // display total
 cout << "Sum of the " << number << " values is " << total << endl;
 // display average
 cout << "\nThe average is: "
 << static_cast< double > ( total ) / number << endl;
 
 } // end main
