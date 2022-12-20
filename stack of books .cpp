#include<iostream>
#include<string.h>
using namespace std;

int main(){
    // Declare a 2D character array to hold the book numbers
    char box[5][10];
    // Declare a character array to hold the book number input by the user
    char bkNo[10];
    // Initialize the top of the stack to -1
    int top=-1;
    // Declare a variable to hold the user's menu choice
    int choice;
    // Declare a flag variable and initialize it to 1 to enter the loop
    int flg=1;

    // Enter the loop
    while(flg){
        // Display the menu options
        cout<<" \n 1. Insert a book in a box ";
        cout<<"\n 2. Delte a book from the box";
        cout<<"\n 3. Display book from the box";
        cout<<"\n 4. exit";
        cout<<"\n -> ";
    
        // Read the user's choice
        cin>>choice;

        // Use a switch statement to execute the appropriate action based on the user's choice
        switch(choice){
            case 1:
                    // If the stack is not full, add a book to the top of the stack
                    if(top<=4){
                        // Increment the top of the stack
                        ++top;
                        // Prompt the user to enter the book number
                        cout<<"\nEnter the book: ";
                        // Read the book number
                        cin>>bkNo;
                        // Copy the book number to the top of the stack
                        strcpy(box[top],bkNo);
                    }
                    // If the stack is full, display a message
                    else
                        cout<<"box is full";
            break;
            
            case 2:{
                    // If the stack is not empty, remove the top element from the stack
                    if(top>-1){
                        // Display the book number being removed
                        cout<<box[top]<<" removed from the box"<<endl;
                        // Decrement the top of the stack
                        --top;
                    }
                    // If the stack is empty, display a message
                    else
                        cout<<"box is empty";
                
            break;}

            case 3:
                // If the stack is empty, display a message
                if(top<= -1){
                    cout<<"box is empty";
                }
                // If the stack is not empty, display the book numbers in the stack
                else {
                    cout<<"\n The books in the box are : ";
                    // Iterate through the stack from top to bottom and display the book numbers
                    for(int i=top; i>=0; --i){
                        cout<< box[i]<<" ";
                    }
                }
            break; 
            case 4:
                    // Set the flag variable to 0 to exit the loop
                    flg=0;
                    break;
            // If the user enters an invalid choice, display a message
            default:
                cout<<"\n please enter a valid choice";
                break;
        }
    }
    return 0;
}
