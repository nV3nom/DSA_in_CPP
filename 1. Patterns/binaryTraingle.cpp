#include <bits/stdc++.h>

using namespace std;

// Class to implement the solution
class Solution {
  public:
    // Function to print the triangle
    void printTriangle(int n) {
        // Check if n is within the valid range of 1 to 20
        if(n>=1 && n<=20){
            // Loop through each row
            for(int r=1; r<=n; r++){
                // Initialize output variable to 0
                int out=0;

                // Loop through each column in the row
                for(int c=1; c<=r; c++){
                    // If the sum of the row and column indices is odd, set out to 0
                    if((r+c)%2!=0){
                        out=0;
                    }
                    // If the sum of the row and column indices is even, set out to 1
                    else{
                        out=1;
                    }
                    // Print out
                    cout<<out<<" ";
                }
                // Print a newline after each row
                cout<<"\n";
            }
        }
    }
};

// Main function
int main() {
    // Read in the number of test cases
    int t;
    cin >> t;
    // Loop through each test case
    while (t--) {
        // Read in the size of the triangle
        int n;
        cin >> n;

        // Create an object of the Solution class
        Solution ob;
        // Call the function to print the triangle
        ob.printTriangle(n);
    }
    return 0;
}
