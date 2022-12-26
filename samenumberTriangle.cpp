#include <bits/stdc++.h>

using namespace std;

// This class contains the solution to the problem.
class Solution {
  public:
    // This function takes an integer as input and prints a triangle of numbers from 1 to n.
    // Each row contains the number of the row, repeated as many times as the number of the row.
    // For example, for n=4, the function prints:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    void printTriangle(int n) {
        // Check if n is within the valid range of 1 to 20.
        if(n>=1 && n<=20){
            // Loop through each row of the triangle.
            for(int i=1; i<=n; i++){
                // Loop through each number in the row.
                for(int j=0; j<i; j++){
                    // Print the number of the row.
                    cout<<i<<" ";
                }
                // Move to the next line after printing the numbers in the row.
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
