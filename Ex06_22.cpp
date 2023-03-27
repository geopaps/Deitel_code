// Exercise 6.22 Solution: Ex06_22.cpp
// Displays a solid rectangle of asterisks.
 #include <iostream>
 using namespace std;

void rectangle( int, int ); // function prototype

int main()
 { 
   int side1, side2; // input side lengths

	  cout << "Enter sides: ";
	  cin >> side1 >> side2;
      cout << '\n';

      rectangle( side1, side2); // display solid rectangle of asterisks
	cout << endl;
  } // end main

// square displays solid rectangle of asterisks with specified sides
 void rectangle( int s1, int s2 )
 {
 // loop s1 times for number of rows
   for ( int row = 1; row <= s1; row++ )
     {
        // loop s2 times for number of columns
        for ( int col = 1; col <= s2; col++ )
         cout << '*';

        cout << '\n';
      } // end for
 } // end function rectangle
