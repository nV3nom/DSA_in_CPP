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
