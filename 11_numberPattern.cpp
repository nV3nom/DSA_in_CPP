// This code prints out a number triangle made up of integers from 1 to n, with spaces between each number. 
// The number of rows will be equal to n, and the first row will contain a single 1, 
// the second row will contain two 1s separated by spaces, and so on. 
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
