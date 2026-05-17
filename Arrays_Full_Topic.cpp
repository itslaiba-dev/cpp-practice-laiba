#include <iostream>
using namespace std;

int main()
{
    // =========================================
    // SIMPLE ARRAY
    // =========================================

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "===== SIMPLE ARRAY =====" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }


    // =========================================
    // USER INPUT ARRAY
    // =========================================

    int num[5];

    cout << "\n===== USER INPUT ARRAY =====" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter Value " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "\nArray Elements are:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }


    // =========================================
    // SUM OF ARRAY
    // =========================================

    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }

    cout << "\n===== SUM OF ARRAY =====" << endl;

    cout << "Total Sum = " << sum << endl;


    // =========================================
    // AVERAGE OF ARRAY
    // =========================================

    float avg = sum / 5.0;

    cout << "\n===== AVERAGE =====" << endl;

    cout << "Average = " << avg << endl;


    // =========================================
    // MAXIMUM VALUE
    // =========================================

    int maximum = num[0];

    for(int i = 1; i < 5; i++)
    {
        if(num[i] > maximum)
        {
            maximum = num[i];
        }
    }

    cout << "\n===== MAXIMUM VALUE =====" << endl;

    cout << "Maximum = " << maximum << endl;


    // =========================================
    // MINIMUM VALUE
    // =========================================

    int minimum = num[0];

    for(int i = 1; i < 5; i++)
    {
        if(num[i] < minimum)
        {
            minimum = num[i];
        }
    }

    cout << "\n===== MINIMUM VALUE =====" << endl;

    cout << "Minimum = " << minimum << endl;


    // =========================================
    // SEARCH ELEMENT
    // =========================================

    int search;
    bool found = false;

    cout << "\n===== SEARCH ELEMENT =====" << endl;

    cout << "Enter Number to Search: ";
    cin >> search;

    for(int i = 0; i < 5; i++)
    {
        if(num[i] == search)
        {
            found = true;
            break;
        }
    }

    if(found)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }


    // =========================================
    // REVERSE ARRAY
    // =========================================

    cout << "\n===== REVERSE ARRAY =====" << endl;

    for(int i = 4; i >= 0; i--)
    {
        cout << num[i] << endl;
    }


    // =========================================
    // COPY ARRAY
    // =========================================

    int copyArr[5];

    for(int i = 0; i < 5; i++)
    {
        copyArr[i] = num[i];
    }

    cout << "\n===== COPY ARRAY =====" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << copyArr[i] << endl;
    }


    // =========================================
    // END
    // =========================================

    cout << "\n===== PROGRAM END =====" << endl;

    return 0;
}
