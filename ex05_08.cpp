// Exercise 5.8 Solution: ex05_08.cpp
// Find the smallest and largest of several integers.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    
       int num, largest, smallest; // variables
       
   // Get input from user
   cout << "Enter an integer (9999 to quit): ";
   cin  >> num;

   // initialize largest and smallest to num
   largest = num; 
   smallest = num;
   
   // Get the numbers till user enters 9999
   while (num != 9999)
   {
      // Get the next number
      cout << "Enter another integer (9999 to quit): ";
      cin  >> num;
      
      if (num != 9999)
      {
         if (num > largest)
               largest = num;
         if (num < smallest)
               smallest = num;
      }
   }
   
   // Display the results
   cout << "\nThe Largest number you entered is "
        << largest << endl;
   cout << "The smallest number you entered is "
        << smallest << endl;
   
   return 0;
}// end of main
