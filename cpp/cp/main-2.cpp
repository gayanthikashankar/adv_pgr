
#include <iostream>
using namespace std;
/*
This program:

Dynamically allocates memory for an array of integers
Takes user input to fill the array
Displays the array contents
Properly frees the allocated memory

*/
int main()
{
    int* arr = new int[5];
    for(int i=0; i<5; i++){
        cout<< "enter the value"<< endl;
        cin>> arr[i];
    }
    
    for(int j=0; j<5; j++){
        cout<<arr[j]<<" ";
    }
    
    delete[] arr;
    return 0;
}