/*
The output of this code will be a series of triangles with letters of the alphabet. Each triangle will have n rows, and the letters of the alphabet will be printed in ascending order from the top of the triangle to the bottom.

For example, if n is 4, the output will be:
E
E D
E D C
E D C B
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Class to define the method to print the triangles
class Solution {
  public:
    // Method to print the triangles
    void printTriangle(int n) {
        // Check if n is within the valid range of 1 to 20
        if(n>=1 && n<=20){
            // Loop through each row of the triangle
            for(int row=1; row<=n; row++){
                // Initialize the starting letter as the nth letter of the alphabet (counting from A as the 1st letter)
                int alpha=64+n;
                // Loop through each column of the current row
                for(int col=1; col<=row; col++){
                    // Print the current letter
                    cout<<(char)alpha<<" ";
                    // Decrement the letter by 1 for the next iteration
                    --alpha;
                }
                
                // Print a newline character after each row
                cout<<"\n";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
