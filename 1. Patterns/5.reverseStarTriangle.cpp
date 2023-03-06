/*
https://practice.geeksforgeeks.org/problems/triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_5
Input: 5
Output:
* * * * *
* * * * 
* * * 
* *  
* 

*/


// This is the main driver code which reads the input, calls the Solution class, and prints the output
#include <bits/stdc++.h> // This is a header file which includes all the standard library headers in one place

using namespace std; // This line allows us to use the standard library functions without using the "std::" prefix

// The Solution class contains the function to print the triangle
class Solution{
public:
	
	// This function takes an integer n as input and prints a right triangle of asterisks (*) with n rows
	// The first row has one asterisk, the second row has two asterisks, and so on
	void printTriangle(int n) {
	    // The function checks if the input is within the valid range of 1 to 20
	    if(n>=1 && n<=20){
	        // The outer loop iterates from n to 1 (in decreasing order)
	        for(int i=n; i>=1; i--){
	            // The inner loop iterates from 0 to i (in increasing order)
	            for(int j=0; j<i; j++){
	                // This line prints an asterisk and a space for each iteration of the inner loop
	                cout<<"*"<<" ";
	            }
	            // This line prints a newline character after each iteration of the outer loop
	            cout<<"\n";
	        }
	    }
	}
};

// This is the main function which runs the program
int main() {
    // This variable holds the number of test cases
    int t;
    // This line reads the value of t from the input
    cin >> t;
    // This loop iterates t times
    while (t--) {
        // This variable holds the number of rows for each test case
        int n;
        // This line reads the value of n from the input
        cin >> n;
        
        // This line creates an object of the Solution class
        Solution ob;
        // This line calls the printTriangle function of the Solution object with the input n
        ob.printTriangle(n);
    }
    // This line returns 0 to indicate the program has completed successfully
    return 0;
}
