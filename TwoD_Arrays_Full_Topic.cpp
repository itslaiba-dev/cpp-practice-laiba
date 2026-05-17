#include <iostream>
using namespace std;

int main()
{
    // =========================================
    // DECLARE 2D ARRAY
    // =========================================

    int arr[3][3];

    cout << "===== ENTER 2D ARRAY ELEMENTS =====" << endl;

    // =========================================
    // INPUT IN 2D ARRAY
    // =========================================

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }


    // =========================================
    // DISPLAY 2D ARRAY
    // =========================================

    cout << "\n===== DISPLAY 2D ARRAY =====" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }


    // =========================================
    // SUM OF ALL ELEMENTS
    // =========================================

    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "\n===== SUM OF ALL ELEMENTS =====" << endl;

    cout << "Total Sum = " << sum << endl;


    // =========================================
    // ROW SUM
    // =========================================

    cout << "\n===== ROW SUM =====" << endl;

    for(int i = 0; i < 3; i++)
    {
        int rowSum = 0;

        for(int j = 0; j < 3; j++)
        {
            rowSum = rowSum + arr[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << rowSum << endl;
    }


    // =========================================
    // COLUMN SUM
    // =========================================

    cout << "\n===== COLUMN SUM =====" << endl;

    for(int j = 0; j < 3; j++)
    {
        int colSum = 0;

        for(int i = 0; i < 3; i++)
        {
            colSum = colSum + arr[i][j];
        }

        cout << "Column " << j + 1 << " Sum = " << colSum << endl;
    }


    // =========================================
    // DIAGONAL SUM
    // =========================================

    int diagonalSum = 0;

    for(int i = 0; i < 3; i++)
    {
        diagonalSum = diagonalSum + arr[i][i];
    }

    cout << "\n===== DIAGONAL SUM =====" << endl;

    cout << "Diagonal Sum = " << diagonalSum << endl;


    // =========================================
    // TRANSPOSE OF MATRIX
    // =========================================

    cout << "\n===== TRANSPOSE OF MATRIX =====" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }


    // =========================================
    // MAXIMUM ELEMENT
    // =========================================

    int maximum = arr[0][0];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] > maximum)
            {
                maximum = arr[i][j];
            }
        }
    }

    cout << "\n===== MAXIMUM ELEMENT =====" << endl;

    cout << "Maximum = " << maximum << endl;


    // =========================================
    // MINIMUM ELEMENT
    // =========================================

    int minimum = arr[0][0];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] < minimum)
            {
                minimum = arr[i][j];
            }
        }
    }

    cout << "\n===== MINIMUM ELEMENT =====" << endl;

    cout << "Minimum = " << minimum << endl;


    // =========================================
    // END
    // =========================================

    cout << "\n===== PROGRAM END =====" << endl;

    return 0;
}
