/*
https://practice.geeksforgeeks.org/problems/right-triangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_2
This program defines a class called Solution which has a single member function called printTriangle. The printTriangle function takes an integer parameter n and prints out a triangle made of asterisks to the console. The program's main function reads an integer value t from the user and then enters a loop that iterates t times. For each iteration of the loop, the main function reads an integer value n from the user, creates a Solution object, and calls the printTriangle function on the object, passing n as the argument. The printTriangle function then prints a triangle made of asterisks with a height of n to the console. The program returns 0 to indicate that it has finished successfully.
Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
*/


// This line includes a standard library file that provides various
// utility functions and definitions that are commonly used in C++ programs.
#include <bits/stdc++.h>

// This line declares that we are using the "std" namespace in this code.
// This means that we do not have to specify the "std" namespace for
// functions and types that are defined in the standard library.
using namespace std;

// This class defines a "Solution" object that has a single member function
// called "printTriangle".
class Solution {
  public:
    // This function takes an integer parameter "n" and prints out a triangle
    // made of asterisks to the console.
    void printTriangle(int n) {
        // Check if the input value "n" is within the valid range of 1 to 20.
        if(n>=1 && n<=20){
            // If "n" is valid, enter a loop that iterates "n" times.
            for(int i=0; i<n; i++){
                // For each iteration of the loop, enter a nested loop that
                // iterates "i+1" times.
                for(int j=0; j<=i; j++){
                    // For each iteration of the nested loop, print an asterisk.
                    cout<<"*"<<" ";
                }
                // After the nested loop finishes, print a newline character
                // to move to the next line.
                cout<<"\n";
            }
        }
    }
};

// This is the main function of the program, which is the entry point
// when the program is run.
int main() {
    // Read an integer value "t" from the user.
    int t;
    cin >> t;

    // Enter a loop that iterates "t" times.
    while (t--) {
        // For each iteration of the loop, read an integer value "n" from the user.
        int n;
        cin >> n;

        // Create a "Solution" object.
        Solution ob;
        // Call the "printTriangle" function on the object, passing "n" as the argument.
        ob.printTriangle(n);
    }
    // Return 0 to indicate that the program has finished successfully.
    return 0;
}

