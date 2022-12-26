#include <bits/stdc++.h>

using namespace std;

// class definition for Solution
class Solution {
  public:
    // function to print a square of asterisks of size n
    void printSquare(int n) {
        // check if the size of the square is within the valid range
        if(n>=1 && n<=20){
            // iterate through the rows of the square
            for(int i=0; i<n; i++){
                // iterate through the columns of the square
                for(int j=0; j<n; j++){
                    // print an asterisk followed by a space
                    cout<<"*"<<" ";
                }
                // move to the next line after finishing a row
                cout<<"\n";
            }
        }
    }
};

int main() {
    int t;
    // read in the number of test cases
    cin >> t;
    while (t--) {
        int n;
        // read in the size of the square
        cin >> n;

        Solution ob;
        // call the function to print the square
        ob.printSquare(n);
    }
    return 0;
}
