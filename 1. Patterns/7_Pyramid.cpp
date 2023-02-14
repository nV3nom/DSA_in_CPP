//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Class to print a right-angled triangle made of asterisks
class Solution {
  public:
    // Function to print the triangle with n rows
    void printTriangle(int n) {
        // Check if n is within the valid range
        if(n>=1 && n<=20){
            // Iterate over the rows of the triangle
            for(int r=1; r<=n; r++){
                // Print the required number of spaces at the beginning of each row
                for(int s=n; s>r; s--){
                    cout<<" ";
                }
                // Print the asterisks in each row
                for(int c=1; c<=(2*r)-1; c++){
                    cout<<"*";
                }
                // Go to the next line
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
        // Read the number of rows for the current test case
        int n;
        cin >> n;

        // Create an object of the Solution class
        Solution ob;
        // Call the printTriangle function for the current test case
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
