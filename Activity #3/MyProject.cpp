#include <iostream>
#include <limits> // include the <limits> header
using namespace std;

#define MAX 30

int main()
{
    // array declaration
    int arr[MAX];
    int n, i, j;
    int temp;
    char c[100];

    // read total number of elements to read
    cout << "This is an ascending list data sorter. \nEnter total number of elements to read (Max 30): ";
    cin >> n;

    cout << "Enter the name for the ascending list (e.g. Top 30 Highest Population From Least to Most): ";

    // Use cin.ignore() to clear the newline character from the previous input
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Now, you can read the string with spaces
    cin.getline(c, sizeof(c));

    // check bound
    if (n < 0 || n > MAX) {
        cout << "Input valid range!!!" << endl;
        return -1;
    }

    // read n elements
    for (i = 0; i < n; i++) {
        cout << "Enter element [" << i + 1 << "] ";
        cin >> arr[i];
    }

    // print input elements
    cout << "Unsorted " << c << ":" << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // sorting - ASCENDING ORDER
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // print sorted array elements
    cout << "Sorted (Ascending Order) " << c << ":" << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
