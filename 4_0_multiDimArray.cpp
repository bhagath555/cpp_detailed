#include <iostream>
using namespace std;

// This formats space between console output.
#include <iomanip>
using std::setw;

int main()
{
    // 3 by 4 size array.
    int rows=3; int cols = 4;
    int arr[rows][cols] = {
                            {0, 1, 2, 3} , /* initializers for row indexed by 0 */
                            {4, 5, 6, 7} , /* initializers for row indexed by 1 */
                            {8, 9, 10, 11} /* initializers for row indexed by 2 */
                          };
    int i,j;
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            cout << arr[i][j] << setw(5);
        }
        cout << setw(-5) << endl; // Removing the unwanted space and ending the line.
    }
    // Accessing the array data using pointers.
    for (i=0; i<(rows*cols); i++){
        cout << *(*arr + i) << endl; // Accessing the 2 dimensional array.
    }
}