/*____________________________________________________
Print the multiplication table of 15 using recursion
KASHIF NADEEM KAYANI      456466          ME 15 A
*/
#include <iostream>

using namespace std;

// Function to print the multiplication table of 15 up to a specified range
void printTable(int multiplier, int range) {
    if (range == 0) {
        return; // Base case: stop recursion when the range is 0
    }

    // Print the multiplication result
    cout << "15 x " << multiplier - range + 1 << " = " << 15 * (multiplier - range + 1) << endl;

    // Recursively call the function for the next number in the range
    printTable(multiplier, range - 1);
}

int main() {
    int multiplier = 15;
    int range;

    cout << "Enter the range for the multiplication table: ";
    cin >> range;

    // Call the recursive function to print the table
    printTable(multiplier, range);

    return 0;
}

