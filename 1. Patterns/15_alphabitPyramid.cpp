/*
The "printTriangle" method takes in an integer "n" as an input and prints out a triangle of characters to the console. The triangle consists of "n" rows,
with the first row having 1 character, the second row having 2 characters, and so on until the last row, which has "n" characters. The characters printed in
each row are capital letters of the English alphabet, starting with 'A' in the first row and increasing by one for each subsequent row.

For example, if the input value of "n" is 5, the method will output the following triangle:
A
BB
CCC
DDDD
EEEEE
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// class definition for Solution
class Solution {
  public:
    // method to print the triangle of characters
    void printTriangle(int n) {
        // check if the input value of n is within the specified range
        if(n>=1 && n<=20){
            // initialize the character to be printed in the first row as 'A'
            char alpha='A';
            
            // loop through each row of the triangle
            for(int row=1; row<=n; row++ ){
                // loop through each character in the current row
                for(int col=1; col<=row; col++){
                    // print the current character
                    cout<<alpha;
                }
                
                // move to the next line after printing the row
                cout<<"\n";
                
                // increment the character for the next row
                alpha++;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    // read in the number of test cases
    int t;
    cin >> t;
    
    // loop through each test case
    while (t--) {
        // read in the input value for the current test case
        int n;
        cin >> n;

        // create an instance of the Solution class
        Solution ob;
        
        // call the printTriangle method of the Solution class and pass the input value as an argument
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
