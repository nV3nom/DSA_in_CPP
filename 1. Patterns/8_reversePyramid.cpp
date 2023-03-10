/*
https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8
Input: 5

Output:

*********
 *******
  *****
   ***
    *
Algo:    
1. Define a class called Solution.
2. Inside the class, define a method called printTriangle that takes an integer N as input.
3. For each row in the triangle, starting from N and going down to 1, do the following:
   1. For each space in the row (there are N - row spaces), print a space character.
   2. For each column in the row (there are 2*row - 1 columns), print a star character.
   3. After all the spaces and stars have been printed for the current row, print a newline character to move to the next row.
4. Once all rows have been printed, the method returns.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Class definition for Solution
class Solution {
public:
	
	// Method to print the inverted pyramid-shaped triangle
	void printTriangle(int n) {
	    // Check if the input value is within the valid range (1 to 20 inclusive)
	    if(n>=1 && n<=20){
	        // Loop through each row of the triangle (starting from the bottom row)
	        for(int r=n; r>0; r--){
	            // Print the necessary number of spaces before the asterisks for this row
	            for(int s=0; s<n-r; s++){
	                cout<<" ";
	            }
                // Print the necessary number of asterisks for this row
                for(int c=(2*r-1); c>0; c--){
                    cout<<"*";
                }
                
                // Move to the next line
                cout<<"\n";
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    // Read in the number of test cases
    cin >> t;
    // Loop through each test case
    while (t--) {
        int n;
        // Read in the value for this test case
        cin >> n;
        
        // Create an instance of the Solution class
        Solution ob;
        // Call the printTriangle method on this instance, using the input value for this test case
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
