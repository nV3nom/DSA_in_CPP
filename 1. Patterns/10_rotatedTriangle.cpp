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
