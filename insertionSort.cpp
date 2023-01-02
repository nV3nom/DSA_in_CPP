/*
iSrt function sorts the array in ascending order using the insertion sort algorithm. The printArray function is then called to print the sorted array to the console.
Given array:
12 11 13 5 6 69 420 
Sorted array:
5 6 11 12 13 69 420 
*/
#include <iostream>
#include <algorithm>

using namespace std;

// Function to sort an array using insertion sort
void iSrt(int arr[], int n)
{
    // Loop through the array, starting from the second element
    for (int i = 1; i < n; i++) {
        // Store the current element in a key variable
        int key = arr[i];
        // Start the "hole" one position to the left of the current element
        int j = i - 1;
  
        // Shift all elements to the right of the "hole" that are greater than the key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Insert the key into the "hole"
        arr[j + 1] = key;
    }
}
  
// Function to print an array
void printArray(int arr[], int n)
{
    // Loop through the array and print each element
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
  
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 69 ,420 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array:" << endl;
    printArray(arr, n);

    iSrt(arr, n);

    cout << "Sorted array:" << endl;
    printArray(arr, n);
  
    return 0;
}


