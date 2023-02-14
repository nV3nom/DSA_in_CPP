/*
The output of the given C++ code will be a triangle of numbers, with each row containing numbers from 1 to the row number, and each number separated by a space. The number of rows in the triangle will be determined by the value of the integer variable "n" that is input by the user.

For example, if the user inputs the value "5" for "n", the output will be as follows:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Class containing the function to print the triangle
class Solution {
  public:
    // Function to print the triangle
    void printTriangle(int n) {
        // Check if the value of "n" is within the range 1 to 20
        if(n>=1 && n<=20){
            // Initialize a variable "flag" to store the current number to be printed
            int flag=0;
            // Loop through the rows of the triangle
            for(int row=1; row<=n; row++){
                // Loop through the columns of the current row
                for(int col=1; col<=row; col++){
                    // Increment the value of "flag" and print it
                    flag++;
                    cout<<flag<<" ";
                }
                // Move to the next line after printing all the numbers in the current row
                cout<<"\n";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    // Read the number of test cases
    int t;
    cin >> t;
    // Loop through the test cases
    while (t--) {
        // Read the value of "n" for the current test case
        int n;
        cin >> n;

        // Create an object of the Solution class
        Solution ob;
        // Call the function to print the triangle
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
