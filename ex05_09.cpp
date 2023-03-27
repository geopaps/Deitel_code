// Exercise 5.9 Solution: ex05_09.cpp
// Print a list of prime numbers from 1 to 25.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    
       int prime, i; // variables

	   // the outer loop for getting the numbers in the range of 1 - 25
       for (prime = 1; prime <= 25; prime++)
	   { 
		   // the inner loop checks each number from outer loop for prime
		   for (i = 2; i < prime; i++)
		   {
			   if (prime % i == 0)//not a prime number
				   break;
			   else
				   continue;//might be a prime number, lets check again
		   }
		   if (i == prime)// definitely a prime number
			   cout << prime << endl;
	   }
   
      return 0;
}// end of main
