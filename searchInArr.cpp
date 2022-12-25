#include <iostream>

using namespace std;

// Function to print the elements of an array
void printArr(int arr[], int n) {
  cout << "The elements in the array are:" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

// Function to perform binary search on an array
int bS(int arr[], int n, int key) {
  int start = 0;  // Start index of the array
  int end = n - 1;  // End index of the array
  int mid = (start + end) / 2;  // Middle index of the array

  // Loop through the array
  for (int i = 0; i < n; i++) {
    // If key is found, return its index
    if (arr[mid] == key) {
      return mid;
    }
    // If key is greater than the middle element, search the right half of the array
    if (key > arr[mid]) {
      start = mid + 1;
    }
    // If key is lesser than the middle element, search the left half of the array
    else {
      end = mid - 1;
    }
    // Update the middle index
    mid = (start + end) / 2;
  }
  // If key is not found, return -1
  return -1;
}

int main(){

    int n;  // variable to store the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;  // read the size of the array
    int arr[n];  // declare an array of size n

    cout << "\nEnter the elements of the array:" << endl;
    for(int i=0; i<=n-1; i++){  // loop to read the elements of the array
        cin >> arr[i];  // read an element
    }

    printArr(arr,n);  // call the function to print the elements of the array
    
    int e;  // variable to store the element to be searched
    cout << "\nEnter the element you want to find: ";
    cin >> e;  // read the element to be searched
    
    int x;  // variable to store the choice of search method
    cout << "\nPress 1 for linear search" << endl;
    cout << "Press 2 for binary search (array must be sorted)" << endl;
    cout << "\n->";
    cin >> x;  // read the choice of search method
    
    int flg=0;  // flag variable to check if the element is found
    switch(x){  // switch statement to choose the search method

        // linear search
        case 1:{
        for(int i=0; i<n-1; i++){  // loop through the array
            if (arr[i]==e){  // if element is found, print its index
                cout << "\n" << e << " was found at index " << i;
                ++flg;  // set the flag to 1
                //break;  // enable if element is distinct
            }   
        }
        if(flg==0){  // if element is not found, print a message
            cout << "\nElement is not present in the array";
        }
        break;
        }

        // binary search
        case 2:{
            
            int findIndex = bS(arr, n, e);  // search for the element and store its index
            cout << "\nElement found at index " << findIndex;  // print the index if element is found
        }
        break;

    }

    return 0;
}
