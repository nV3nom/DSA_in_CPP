/*
This code defines a class Solution with a single method printSquare that takes an integer n as input and prints out a square with sides of length n using 
asterisks (*) as the border and spaces as the interior.
Input: 4

Output:
****
*  *
*  *
****
*/

#include <bits/stdc++.h>

using namespace std;

// Define the Solution class
class Solution {
  public:
    // Define the printSquare method
    void printSquare(int n) {
        // Check if n is within the valid range (1 <= n <= 20)
        if(n>=1 && n<=20){
            // Iterate over the rows of the square
            for(int row=1; row<=n; row++){
                // If this is the first or last row, print a row of asterisks
                if(row==1 || row==n){
                    for(int col=1; col<=n; col++){
                        cout<<"*"; 
                    }
                }
                // Otherwise, print an asterisk at the start and end of the row, and spaces in between
                else{
                    cout<<"*";
                    for(int space=1; space<=n-2; space++){
                        cout<<" ";
                    }
                    cout<<"*";
                }
                // Move to the next line
                cout<<"\n";
            }
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
