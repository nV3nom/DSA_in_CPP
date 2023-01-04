#include <iostream>
#include <cstdio>

// Function to print the elements in the array
void printArr(int arr[], int n) {
  std::cout << "The elements in the array are: " << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

// Function for binary search
int bS(int arr[], int n, int key) {
  // Initialize start and end indices
  int start = 0;
  int end = n - 1;
  // Initialize mid index
  int mid = (start + end) / 2;
  // Loop through the array
  for (int i = 0; i < n; i++) {
    // Check if element at mid index is the key
    if (arr[mid] == key) {
      return mid;
    }
    // If key is greater than element at mid index, update start index
    if (key > arr[mid]) {
      start = mid + 1;
    } else { // Otherwise, update end index
      end = mid - 1;
    }
    // Update mid index
    mid = (start + end) / 2;
  }
  // If key is not found, return -1
  return -1;
}

int main() {
  int n;
  // Get size of array from user
  std::cout << "Enter the size of the array: ";
  std::cin >> n;
  int arr[n];

  std::cout << "\nEnter elements: " << std::endl;
  // Get elements of array from user
  for (int i = 0; i <= n - 1; i++) {
    std::cin >> arr[i];
  }

  // Print elements of array
  printArr(arr, n);

  int e;
  // Get element to search for from user
  std::cout << "\nEnter the element you want to find: ";
  std::cin >> e;

  int x;
  // Prompt user to choose search method
  std::cout << "\nPress 1 for linear search" << std::endl;
  std::cout << "Press 2 for binary search (entered array must be sorted)"
            << std::endl;
  std::cout << "\n->";
  std::cin >> x;

  int flg = 0;
  // Perform search based on user's choice
  switch (x) {
    case 1: { // Linear search
      for (int i = 0; i < n - 1; i++) {
        if (arr[i] == e) {
          std::cout << "\n" << e << " was found at index " << i << std::endl;
          ++flg;
          // break; // enable if element is distinct
        }
      }
      if (flg == 0) {
        std::cout << "\nElement is not present in the array" << std::endl;
      }
      break;
    }

    case 2: { // Binary search
      int findIndex = bS(arr, n, e);
            printf("\nElement found at index %d", findIndex);
        }
        break;

    }

    return 0;
}
      
      
      
     
