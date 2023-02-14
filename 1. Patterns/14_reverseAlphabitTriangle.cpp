/*
The output of the code will be a triangle of alphabets, with the base of the triangle being n characters wide, and each subsequent row one character shorter than 
the previous. The first row of the triangle will be the alphabets from A to the nth alphabet (where A is the leftmost character and the nth alphabet is the rightmost
character), the second row will be the alphabets from B to the (n-1)th alphabet, and so on, until the final row, which will only contain the letter A.
If the input value of n is 5, the output of the code will be:
ABCDE
ABCD
ABC
AB
A
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// Solution class to implement the function to print the triangle
class Solution {
  public:
    // function to print the triangle of alphabets
    void printTriangle(int n) {
        // if the value of n is between 1 and 20 (inclusive)
        if(n>=1 && n<=20){
            // loop through each row of the triangle (starting from the bottom)
            for(int row=n; row>=1; row--){
                // initialize the alphabet to be printed at the start of each row
                char alpha='A';
                // loop through each column of the current row
                for(int col=1; col<=row; col++){
                    // print the current alphabet
                    cout<<alpha;
                    // increment the alphabet for the next column
                    alpha++;
                }
                
                // move to the next line after finishing the current row
                cout<<"\n";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    // variable to store the number of test cases
    int t;
    // read the number of test cases
    cin >> t;
    // loop through each test case
    while (t--) {
        // variable to store the size of the triangle
        int n;
        // read the size of the triangle
        cin >> n;

        // create an object of the Solution class
        Solution ob;
        // call the function to print the triangle
        ob.printTriangle(n);
    }
    // end the program
    return 0;
}
// } Driver Code Ends
