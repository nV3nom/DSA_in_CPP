/*
The output of this code will be a series of alphabetically ascending triangles with a height of n. 
The first triangle will have a height of 1 and will consist of a single character 'A'.
The second triangle will have a height of 2 and will consist of two characters 'A' and 'B', and so on. 
For example, if n is 5, the output will be:
A
AB
ABC
ABCD
ABCDE
*/
#include <bits/stdc++.h>

using namespace std;

// Class that contains the function to print the triangles
class Solution {
  public:
    // Function that prints the triangles
    void printTriangle(int n) {
        // Check if n is within the valid range
        if(n>=1 && n<=20){
            // Loop through each row of the triangle
            for(int row=1; row<=n; row++){
                // Initialize the alphabetical character for this row
                char alpha='A';
                // Loop through each column of the triangle
                for(int col=1; col<=row; col++){
                    // Print the character and increment it
                    cout<<alpha;
                    alpha++;
                }
                // Move to the next line after printing all the characters for this row
                cout<<"\n";
            }
        }
    }
};

int main() {
    int t;
    cin >> t;
    // Loop through each test case
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        // Call the function to print the triangle
        ob.printTriangle(n);
    }
    return 0;
}
