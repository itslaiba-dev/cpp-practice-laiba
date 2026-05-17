#include <iostream>
using namespace std;

int main()
{
    // =========================================
    // SIMPLE VARIABLE
    // =========================================

    int x = 10;

    cout << "===== SIMPLE VARIABLE =====" << endl;

    cout << "Value of x: " << x << endl;

    cout << "Address of x: " << &x << endl;


    // =========================================
    // POINTER DECLARATION
    // =========================================

    int *p;

    p = &x;

    cout << "\n===== POINTER =====" << endl;

    cout << "Pointer p stores address: " << p << endl;

    cout << "Value using *p: " << *p << endl;


    // =========================================
    // CHANGING VALUE USING POINTER
    // =========================================

    *p = 50;

    cout << "\n===== CHANGE VALUE USING POINTER =====" << endl;

    cout << "New value of x: " << x << endl;

    cout << "New value using pointer: " << *p << endl;


    // =========================================
    // POINTER WITH ANOTHER VARIABLE
    // =========================================

    int y = 100;

    int *ptr = &y;

    cout << "\n===== ANOTHER POINTER =====" << endl;

    cout << "Value of y: " << y << endl;

    cout << "Address of y: " << &y << endl;

    cout << "Pointer ptr stores: " << ptr << endl;

    cout << "Value using *ptr: " << *ptr << endl;


    // =========================================
    // NULL POINTER
    // =========================================

    int *nullPtr = NULL;

    cout << "\n===== NULL POINTER =====" << endl;

    cout << "Null Pointer: " << nullPtr << endl;


    // =========================================
    // POINTER ARITHMETIC
    // =========================================

    int arr[5] = {10, 20, 30, 40, 50};

    int *aptr = arr;

    cout << "\n===== POINTER ARITHMETIC =====" << endl;

    cout << "First Value: " << *aptr << endl;

    aptr++;

    cout << "Second Value: " << *aptr << endl;

    aptr++;

    cout << "Third Value: " << *aptr << endl;


    // =========================================
    // ARRAY WITH POINTER
    // =========================================

    int *a = arr;

    cout << "\n===== ARRAY USING POINTER =====" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(a + i) << endl;
    }


    // =========================================
    // POINTER TO POINTER
    // =========================================

    int num = 500;

    int *p1 = &num;

    int **p2 = &p1;

    cout << "\n===== POINTER TO POINTER =====" << endl;

    cout << "Value of num: " << num << endl;

    cout << "Using p1: " << *p1 << endl;

    cout << "Using p2: " << **p2 << endl;


    // =========================================
    // DYNAMIC MEMORY ALLOCATION
    // =========================================

    int *dyn = new int;

    *dyn = 999;

    cout << "\n===== DYNAMIC MEMORY =====" << endl;

    cout << "Dynamic Value: " << *dyn << endl;

    delete dyn;


    // =========================================
    // DYNAMIC ARRAY
    // =========================================

    int size;

    cout << "\n===== DYNAMIC ARRAY =====" << endl;

    cout << "Enter Array Size: ";
    cin >> size;

    int *darr = new int[size];

    cout << "Enter Array Elements:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> darr[i];
    }

    cout << "Array Elements are:" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << darr[i] << endl;
    }

    delete[] darr;


    // =========================================
    // SWAP USING POINTERS
    // =========================================

    int a1 = 5;
    int b1 = 10;

    int *pa = &a1;
    int *pb = &b1;

    int temp = *pa;

    *pa = *pb;

    *pb = temp;

    cout << "\n===== SWAP USING POINTER =====" << endl;

    cout << "a1 = " << a1 << endl;

    cout << "b1 = " << b1 << endl;


    // =========================================
    // CONSTANT POINTER
    // =========================================

    int val = 7;

    int *const cp = &val;

    *cp = 20;

    cout << "\n===== CONSTANT POINTER =====" << endl;

    cout << "Value: " << *cp << endl;


    // =========================================
    // POINTER AND STRING
    // =========================================

    char name[] = "Shahid";

    char *cptr = name;

    cout << "\n===== POINTER WITH STRING =====" << endl;

    cout << cptr << endl;


    // =========================================
    // END
    // =========================================

    cout << "\n===== PROGRAM END =====" << endl;

    return 0;
}
