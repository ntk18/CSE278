/*
Nate Elli
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    cout << "How many numbers would you like to input?" << endl;
    int length = 0;
    cin >> length;

    //Creates the user-specified array.
    int arr [length];
    for (int i = 0; i < length; i++) {
        cout << "Please enter a number." << endl;
        int check;
        cin >> check;
        arr[i] = check;
    }
    
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < length; i++) {
       int x = arr[i];
        if (x > max) {
            max = x;
        }
    }

    for (int i = 0; i < length; i++) {
        int x = arr[i];
        if (x < min) {
            min = x;
        }
    }

    cout << "The length of the array is " << length << endl;
    cout << "The minimum value is " << min << endl;
    cout << "The maximum value is " << max << endl;
    return 0;
}