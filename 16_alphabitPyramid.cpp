/*
The code first checks if the input value of "n" is within the range of 1 to 20. If it is, it enters a loop that iterates "n" number of times, with the variable
"row" representing the current row of the triangle being printed.

For each row, the code first prints a number of spaces equal to "n" minus the current row number. This aligns the triangles so that they have a symmetrical appearance.
For example, if the input value of "n" is 4, the output will be:
   A
  ABA
 ABCBA
ABCDCBA
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to print triangles of letters of the alphabet
    void printTriangle(int n) {
        // Only proceed if n is within the range of 1 to 20
        if(n>=1 && n<=20){
            // Iterate over each row of the triangle
            for(int row=1; row<=n; row++){
                // Initialize the alphabet letter for the current row to 'A'
                char alpha='A';
                // Print the necessary number of spaces to align the triangles
                for(int space=0; space<n-row; space++){
                    cout<<" ";
                }
                // Iterate over the columns of the current row
                for(int col=1; col<=row; col++){
                    // Print the current alphabet letter
                    cout<<alpha;
                    // Increment the alphabet letter for the next column
                    ++alpha;
                }
                // Decrement the alphabet letter by 1 before starting the second half of the row
                --alpha;
                // Iterate over the remaining columns of the current row
                for(int col2=1; col2<row; col2++){
                    // Decrement the alphabet letter and print it
                    --alpha;
                    cout<<alpha;
                }
                // Move to the next line before printing the next row
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

