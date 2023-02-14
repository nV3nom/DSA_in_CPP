/*
Given a number N. Count the number of digits in N which evenly divides N.
Input:
N = 12
Output:
2
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int evenlyDivides(int N){
        int n=N; // copy of N to iterate through digits
        int ld=0; // last digit
        int count=0; // count of digits that evenly divide N
        
        // while there are still digits to check
        while(n>0){
            ld=n%10; // get last digit
            if(ld!=0 && N % ld==0) // if last digit is not 0 and evenly divides N
            {
                count++; // increment count
            }
            n=n/10; // remove last digit from number
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
