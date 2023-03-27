// Exercise 6.23 Solution: Ex06_23.cpp
// Displays a solid rectangle of asterisks.
 #include <iostream>
 using namespace std;

void rectangle( int, int, char); // function prototype

int main()
 { char fill;
   int side1, side2; // input side lengths

	  cout << "Enter sides: ";
	  cin >> side1 >> side2;
      cout << '\n';
	  cout << "Enter a character to fill the rectangle: ";
      cin >> fill;
      cout << '\n';

     rectangle( side1, side2, fill); // display solid rectangle of asterisks
	cout << endl;
	
 } // end main

// square displays solid rectangle of fill characters with specified sides
 void rectangle( int s1, int s2, char fillCharacter )
 {
 // loop s1 times for number of rows
   for ( int row = 1; row <= s1; row++ )
     {
        // loop s2 times for number of columns
        for ( int col = 1; col <= s2; col++ )
         cout << fillCharacter << " ";

        cout << '\n';
      } // end for
 } // end function rectangle

