/*
This code implements a solution to print a square of stars of size n x n using C++. The program receives the number of test cases as input, and then loops through each test case, receiving the size of the square as input and calling the printSquare function on an instance of the Solution class.

The printSquare function takes the size of the square as input and loops through each row and column of the square, printing a star and a space for each column, and moving to the next line after each row. The function first checks if the input size is within the valid range of 1 to 20 before printing the square.

Overall, this program demonstrates basic input and output operations in C++, as well as looping and conditional statements.

Here's a sample output for the program with t=1 and n=5:
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Solution class to implement the function to print a square
class Solution {
  public:
    // Function to print a square of size n
    void printSquare(int n) {
        // Check if n is within the valid range of 1 to 20
        if(n>=1 && n<=20){
            // Loop through rows
            for(int i=0; i<n; i++){
                // Loop through columns
                for(int j=0; j<n; j++){
                    // Print a star and a space for each column
                    cout<<"*"<<" ";
                }
                // Move to the next line after each row
                cout<<"\n";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    // Number of test cases
    int t;
    cin >> t;
    // Loop through test cases
    while (t--) {
        // Size of the square
        int n;
        cin >> n;

        // Create an object of the Solution class
        Solution ob;
        // Call the printSquare function on the object, passing in the size of the square
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends
