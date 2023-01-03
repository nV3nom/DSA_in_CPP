/*
The output of this code will be a series of n x n grids where the value of each cell in the grid is determined by its distance from the nearest edge of the grid. The value in each cell is equal to n minus the minimum distance from that cell to the nearest edge of the grid. The number of grids printed will be equal to the value of the variable "t", which is read in from standard input at the beginning of the main function.
Input: 4

Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Class to define the printSquare function
class Solution {
  public:
    // Function to print the n x n grid with cell values determined by
    // their distance from the nearest edge
    void printSquare(int n) {
        // Check if n is within the valid range
        if(n>=1 && n<=20){
            // Loop through rows
            for(int row=0; row<=2*n-2; row++){
                // Loop through columns
                for(int col=0; col<=2*n-2; col++){
                    // Calculate distance from top edge
                    int top=row;
                    // Calculate distance from bottom edge
                    int bottom=(2*n-2)-row;
                    // Calculate distance from left edge
                    int left=col;
                    // Calculate distance from right edge
                    int right=(2*n-2)-col;
                    
                    // Calculate value for current cell by taking the minimum
                    // distance from all four edges
                    int val= n-(min( min(top,bottom), min(left,right)));
                    
                    // Print value for current cell
                    cout<<val<<" ";
                    
                }
                
                // Print newline after each row
                cout<<"\n";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    // Read in number of test cases
    int t;
    cin >> t;
    // Loop through test cases
    while (t--) {
        // Read in size of grid
        int n;
        cin >> n;

        // Create Solution object
        Solution ob;
        // Call printSquare function for current test case
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends
