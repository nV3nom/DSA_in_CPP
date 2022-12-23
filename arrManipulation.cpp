#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Function to print the elements of the array
void printArr(int arr[], int sizearr) {
  cout << "The elements in the array are:" << endl;
  for (int i = 0; i < sizearr; i++) {
    cout << arr[i] << " ";
  }
}

// Function to store the elements in the array
void storeArr(int arr[], int sizearr) {
  cout << "Enter elements:" << endl;
  for (int i = 0; i < sizearr; i++) {
    cin >> arr[i];
  }
}

int main() {
  int arr[MAX_SIZE];
  int sizearr;
  int ext = 1;
  int x;
  
  cout << "Enter size of array:" << endl;
  cin >> sizearr;
  storeArr(arr, sizearr);
  
  while (ext == 1) {
    cout << "\nPress 1 to insert an element\n"
         << "Press 2 to delete an element\n"
         << "Press 3 to display elements of array\n"
         << "Press 4 to print the last element of the array\n"
         << "Press 5 to exit the program\n";
    cin >> x;
    int ind, val;
    
    switch (x) {
      case 1:
        printArr(arr, sizearr);
        cout << "\nEnter the index at which you want to insert the value:";
        cin >> ind;
        cout << "\nEnter the value:";
        cin >> val;
        
        // Shift elements to the right to make space for the new value
        for (int i = sizearr - 1; i >= ind; i--) {
          arr[i + 1] = arr[i];
        }
        arr[ind] = val;
        printArr(arr, ++sizearr);
        break;
        
      case 2:
        printArr(arr, sizearr);
        cout << "\nEnter the index you want to delete: ";
        cin >> ind;
        
        // Shift elements to the left to fill the gap left by the deleted element
        for (int i = ind - 1; i < sizearr - 1; i++) {
          arr[i] = arr[i + 1];
        }
        printArr(arr, --sizearr);
        break;
        
      case 3:
        printArr(arr, sizearr);
        break;
        
      case 4:
        cout << "The last element in the array is: " << arr[sizearr - 1];
        break;
        
      case 5:
        ext = 0;
        break;
    }
    
    if (ext == 1) {
      cout << "\nPress 1 to continue or 0 to exit:" << endl;
      cin >> ext;
    }
    
    if (ext == 0) {
      cout<<"\nYou have sucessfully exited the program\n";
		}
	}
	
return 0;
}
