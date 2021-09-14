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

    sort(arr, arr + length);

    for (int i = 0; i < length; i++) {
        int x = arr[i];
        cout << x << ", " << endl;
    }

    int median;

    if (length % 2 == 0) {
        int first = arr[(length / 2) - 1];
        int sec = arr[length / 2];

        median = (first + sec) / 2;
    } else {
        median = arr[length / 2];
    }

    cout << "The median is " << median << endl;

    return 0;
}