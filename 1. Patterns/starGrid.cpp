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
