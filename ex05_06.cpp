// Exercise 5.6 Solution: 
// Conversion Celsius to Fahrenheit.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    
   double fahrenheit; // Fahrenheit temparature

   // The display table
   cout << "Conversion of temparature from Celsius to Fahrenheit\n";
   cout << "Celsius\tFahrenheit\n";
      
   // Format output 
   cout << fixed << showpoint << setprecision(2);

   // Display the table
   for (int celsius = 30; celsius <= 50; celsius++) //celsius varies from 30 to 50
   {
      // Convert the temperature
      fahrenheit = ((9.0/5.0) * celsius) + 32;

      // Display results.
      cout << setw(6) << celsius 
           << "\t"  << fahrenheit 
           << endl;
   }// end of for loop
   return 0;
}// end of main

