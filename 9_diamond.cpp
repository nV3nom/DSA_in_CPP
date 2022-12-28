//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Solution class containing the printDiamond function
class Solution {
  public:
    // Function to print the diamond pattern
    void printDiamond(int n) {
        // Check if n is within the valid range of 1 to 20
        if(n>=1 && n<=20){
            // Loop through the rows in the top half of the diamond
            for(int r=1; r<=n; r++){
                // Print the necessary number of spaces to create the diamond shape
                for(int s=n-r; s>0; s--){
                    cout<<" ";
                }
                // Print the asterisks for this row
                for(int c=1; c<=r; c++){
                    cout<<"* ";
                }
                // Move to the next line
                cout<<"\n";
            }
            
            // Loop through the rows in the bottom half of the diamond
            for(int r=n; r>=1; r--){
                // Print the necessary number of spaces to create the diamond shape
                for(int s=n-r; s>0; s--){
                    cout<<" ";
                }
                // Print the asterisks for this row
                for(int c=1; c<=r; c++){
                    cout<<"* ";
                }
                // Move to the next line
                cout<<"\n";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    // Read in the number of test cases
    int t;
    cin >> t;
    // Iterate through each test case
    while (t--) {
        // Read in the size of the diamond
        int n;
        cin >> n;

        // Create an instance of the Solution class
        Solution ob;
        // Call the printDiamond function for this test case
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends
