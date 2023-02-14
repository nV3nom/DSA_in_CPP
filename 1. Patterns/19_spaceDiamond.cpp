/*
The code defines a class Solution with a method printTriangle which takes an integer n as input and prints a pattern in the form of a triangle.

The pattern will have 2*n rows, with the top half of the triangle having n rows and the bottom half having n rows. Each row will have n columns.

The top half of the triangle will be an inverted triangle, with the first row having n asterisks (*), the second row having n-1 asterisks, and so on. Between each pair
of asterisks, there will be 2 spaces.

The bottom half of the triangle will be a triangle, with the first row having 1 asterisk, the second row having 2 asterisks, and so on. Between each pair of asterisks,
there will be 2*(n-1) - 2*rowNumber spaces.
Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Class to define the solution
class Solution {
  public:
    // Method to print the triangle pattern
    void printTriangle(int n) {
        // Check if n is within the valid range
        if(n>=1 && n<=20){
            // Loop through the rows of the top half of the triangle
            for(int row =n; row>=1; row--){
                // Loop through the columns of the current row to print the asterisks
                for(int col1=1; col1<=row; col1++){
                    cout<<"*";
                }
                // Loop through the spaces between the asterisks in the current row
                for(int space1=0; space1<n-row; space1++ ){
                    cout<<"  ";
                }
                // Loop through the columns of the current row to print the asterisks
                for(int col2=1; col2<=row; col2++){
                    cout<<"*";
                }
                // Move to the next line
                cout<<"\n";
            }
            
            // Loop through the rows of the bottom half of the triangle
            for(int row =1; row<=n; row++){
                // Loop through the columns of the current row to print the asterisks
                for(int col3=1; col3<=row; col3++){
                    cout<<"*";
                }
                // Loop through the spaces between the asterisks in the current row
                for(int space1=0; space1<n-row; space1++ ){
                    cout<<"  ";
                }
                // Loop through the columns of the current row to print the asterisks
                for(int col4=1; col4<=row; col4++){
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
