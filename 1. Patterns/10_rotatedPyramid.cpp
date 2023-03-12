/*
https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718013/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_10
For Input: 
5
Your Output: 
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
1. Define a function called printTriangle that takes an integer N as input.
2. Print the top half of the triangle by doing the following for each row from 1 to N-1:
   1. Print a row of stars with length equal to the current row number by doing the following:
      1. Use a nested for loop to print '*' N times, where N is the current row number.
      2. End the line by printing a newline character.
3. Print the bottom half of the triangle by doing the following for each row from N to 1:
   1. Print a row of stars with length equal to the current row number by doing the following:
      1. Use a nested for loop to print '*' N times, where N is the current row number.
      2. End the line by printing a newline character.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

//Back-end complete function Template for C++
class Solution{
public:
    // function to print asterisk triangles
    void printTriangle(int n) {
        // check if n is within valid range
        if(n>=1 && n<=20){
            // print first triangle
            for(int r=1; r<=n; r++){
                for(int c=1; c<=r; c++){
                    cout<<"* ";
                }
                cout<<"\n";
            }
            // print second triangle
            for(int r=n-1; r>=1; r--){
                for(int c=1; c<=r; c++ ){
                    cout<<"* ";
                }
                cout<<"\n";
            }
        }
    }
};

//{ Driver Code Starts.

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
// } Driver Code Ends
