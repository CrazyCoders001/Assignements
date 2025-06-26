//Square Hollow Patern 
#include <iostream>
using namespace std;
int main()
{
    int size = 5; // size of the square
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) // Print '*' for the border (first/last row or first/last column)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) 
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";// Print space for the hollow part
            }
        }
        cout << endl; // New line after each row
    }
    return 0;
}
