/*
It prints n rows of the pattern. Each row consists of the following:
A number of asterisks equal to the row number.
A number of spaces equal to n - row.
Another number of asterisks equal to the row number.
It then prints n - 1 more rows of the pattern. Each row is the same as the rows printed in step 1, but with one less asterisk at the beginning and end of the row.
Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
// This include statement allows us to use functions from the standard library
#include <bits/stdc++.h>

using namespace std;

// This class defines a solution for the problem
class Solution {
  public:
    // This method takes an integer n as an argument and prints a pattern of asterisks and spaces to the console
    void printTriangle(int n) {
        // Check if n is between 1 and 20, inclusive
        if(n>=1 && n<=20){
            // Print n rows of the pattern
            for(int row=1; row<=n; row++){
                // Print row number of asterisks
                for(int col1=1; col1<=row; col1++){
                    cout<<"*";
                }
                // Print n - row spaces
                for(int space=1; space<=n-row; space++){
                    cout<<"  ";
                }
                // Print row number of asterisks
                for(int col2=1; col2<=row; col2++){
                    cout<<"*";
                }
                // Move to the next line
                cout<<"\n";
            }
            
            // Print n - 1 rows of the pattern
            for(int row=n-1; row>=1; row--){
                // Print row number of asterisks
                for(int col3=1; col3<=row; col3++){
                    cout<<"*";
                }
                // Print n - row spaces
                for(int space=1; space<=n-row; space++){
                    cout<<"  ";
                }
                // Print row number of asterisks
                for(int col3=1; col3<=row; col3++){
                    cout<<"*";
                }
                // Move to the next line
                cout<<"\n";
            }
        }
    }
};

// The main function is the entry point of the program
int main() {
    // Read in the number of times to print the pattern
    int t;
    cin >> t;
    // Repeat the pattern t times
    while (t--) {
        // Read in the number of rows for each pattern
        int n;
        cin >> n;

        // Create an instance of the Solution class
        Solution ob;
        // Call the printTriangle method of the Solution class, passing n as an argument
        ob.printTriangle(n);
    }
    // Return 0 to indicate that the program has completed successfully
    return 0;
}
