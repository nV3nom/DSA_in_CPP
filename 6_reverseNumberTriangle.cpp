// This code is for printing a triangle of numbers in the following format:
// For n=4, the triangle will look like this:
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include <bits/stdc++.h> // This line includes all the standard C++ libraries

using namespace std; // This line allows us to use cout, cin, endl, etc. without specifying "std::" before them

// This class contains the function that we will use to print the triangle
class Solution{
public:
	
	// This function takes in an integer n and prints the triangle of numbers as described above
	void printTriangle(int n) {
	    // We will only print the triangle if n is between 1 and 20 (inclusive)
	    if(n>=1 && n<=20){
	        // We will loop through each row of the triangle
	        for(int i=n; i>=1; i-- ){ // i starts at n and decreases by 1 until it reaches 1
	            // We will loop through each column of the row
	            for(int j=1; j<=i; j++){ // j starts at 1 and increases by 1 until it reaches i
	                // We print the value of j for each column in the row
	                cout<<j<<" ";
	            }
	            // We move to the next line after printing all the values for the row
	            cout<<"\n";
	        }
	    }
	}
};

// This is the main function where the program starts execution
int main() {
    // We will read in the number of test cases
    int t;
    cin >> t;
    // We will execute the following loop for each test case
    while (t--) {
        // We read in the value of n for this test case
        int n;
        cin >> n;
        
        // We create an object of the Solution class and call the printTriangle function for it
        Solution ob;
        ob.printTriangle(n);
    }
    // The program ends here
    return 0;
}
