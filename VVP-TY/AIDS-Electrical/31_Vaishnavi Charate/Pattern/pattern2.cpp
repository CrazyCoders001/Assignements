//Square Fill Pattern
#include <iostream>
using namespace std;
int main() 
{
    int rows = 6; // Number of rows for the square pattern
    int cols = 6; // Number of columns for the square pattern
    for (int i = 0; i < rows; ++i)  // Loop for each row
    {
        for (int j = 0; j < cols; ++j) // Loop for each column in the current row
        {
            cout << "* "; // Print an asterisk and a space
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
