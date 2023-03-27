//Exercise 6.21 Solution: Ex06_21.cpp
// Determine whether inputs are odd or even.
 #include <iostream>
 using namespace std;

bool isOdd( int ); // function prototype

int main()
 {
    int x; // current input
	
     // loop for 3 inputs
     for ( int i = 1; i <= 3; i++ )
      {
         cout << "Enter an integer: ";
         cin >> x;

        // determine if input is even
         if ( isOdd(x) )
             cout << x << " is an odd integer\n\n";
	     else
			 cout << x << " is an even integer\n\n";
       } // end for

      cout << endl;
	
	return 0;
 } // end main

// isOdd returns true if a is an odd number
    bool isOdd( int a )
     {
        if(a % 2 != 0 )
			return true;
		else
			return false;
      } // end function 

