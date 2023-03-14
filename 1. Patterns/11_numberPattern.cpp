/*
https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12
Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

Algo:
Start by defining a function called printTriangle that takes a single argument N as input.
For each row of the triangle, iterate from 1 to N (inclusive).
If the current row number is even, create a list called values and append alternating 0's and 1's to it using the modulus operator.
If the current row number is odd, create a list called values and append alternating 1's and 0's to it using the modulus operator.
Concatenate the values in the values list into a single string separated by spaces.
Append a newline character to the end of the string.
After all rows have been processed, print the output string, excluding the final newline character at the end.
*/
#include <bits/stdc++.h>

using namespace std;

// This class contains the method that will print out the number triangle
class Solution {
  public:
    // This method takes an integer n as input and prints out the number triangle
    void printTriangle(int n) {
        // Check if n is within the specified range (1 <= n <= 20)
        if(n>=1 && n<=20){
            // Loop through each row of the triangle
	    for(int row=1; row<=n; row++){
                // Loop through each column in the current row and print out the column number
		for( int col=1; col<=row; col++){
			cout<<col<<" ";
		}
                // Print out spaces to align the second half of the row with the first half
		for(int space=n-row; space>0; space--){
			cout<<"    ";
		}
                // Print out the second half of the row, in reverse order
		for( int col=row; col>=1; col--){
			cout<<col<<" ";
		}
		
		// Move to the next line
		cout<<"\n";
	    }
	}
    }
};

// The main function reads in the number of test cases, then calls the printTriangle method for each test case
int main() {
    // Read in the number of test cases
    int t;
    cin >> t;
    // Loop through each test case
    while (t--) {
        // Read in the input for this test case
        int n;
        cin >> n;

        // Create an instance of the Solution class
        Solution ob;
        // Call the printTriangle method on this instance, using the input for this test case
        ob.printTriangle(n);
    }
    return 0;
}
