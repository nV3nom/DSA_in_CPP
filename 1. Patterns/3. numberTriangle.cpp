/*
https://practice.geeksforgeeks.org/problems/triangle-number/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_3

Input: 5

Output:
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/

#include <bits/stdc++.h>

using namespace std;

// This class contains the method to print a triangle of numbers
class Solution {
  public:
    // Method to print a triangle of numbers of size 'n'
    void printTriangle(int n) {
        // Check if the input is valid (1 <= n <= 20)
        if(n>=1 && n<=20){
            // Loop through the rows of the triangle
            for(int i=1; i<=n; i++){
                // Loop through the columns of the current row
                for(int j=1; j<=i; j++){
                    // Print the number at the current position
                    cout<<j<<" ";
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
        ob.printTriangle(n);
    }
    return 0;
}
