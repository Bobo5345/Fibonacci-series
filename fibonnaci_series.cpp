// Header files
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declaring variables
    int count;
    long long current = 0, prev = 1, temp;

    // Asking user to input the no of terms
    cout << "\nThis program can print terms of fibonnaci series. Enter number of terms need to be printed:";
    cin >> count;

    // A table template (Can be avoided if need :D)
    cout << "\n" << left << setw(10) << "Term" << setw(20) << "Number";
    cout << "\n-------------------------------------------------" << endl;

    // Using for loop to print the values
    for (int i = 1; count >= i; i++) 
    {
        // Outputting the values
        cout << left << setw(10) << i << setw(20) << current << endl;

        // Some maths
        temp = current;
        current = current + prev;
        prev = temp;
    }
    
    return 0;
}