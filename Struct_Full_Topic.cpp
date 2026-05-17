#include <iostream>
using namespace std;

// =========================================
// STRUCT DECLARATION
// =========================================

struct Student
{
    int id;
    string name;
    float marks;
};

int main()
{
    // =========================================
    // SINGLE STRUCT VARIABLE
    // =========================================

    Student s1;

    cout << "===== ENTER STUDENT DATA =====" << endl;

    cout << "Enter ID: ";
    cin >> s1.id;

    cin.ignore(); // buffer clear

    cout << "Enter Name: ";
    getline(cin, s1.name);

    cout << "Enter Marks: ";
    cin >> s1.marks;

    cout << "\n===== STUDENT DATA =====" << endl;

    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;


    // =========================================
    // ARRAY OF STRUCT
    // =========================================

    Student s[3];

    cout << "\n===== ENTER 3 STUDENTS DATA =====" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> s[i].id;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    cout << "\n===== ALL STUDENTS DATA =====" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "ID: " << s[i].id << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }


    // =========================================
    // FIND HIGHEST MARKS
    // =========================================

    int highestIndex = 0;

    for(int i = 1; i < 3; i++)
    {
        if(s[i].marks > s[highestIndex].marks)
        {
            highestIndex = i;
        }
    }

    cout << "\n===== TOP STUDENT =====" << endl;

    cout << "ID: " << s[highestIndex].id << endl;
    cout << "Name: " << s[highestIndex].name << endl;
    cout << "Marks: " << s[highestIndex].marks << endl;


    // =========================================
    // END
    // =========================================

    cout << "\n===== PROGRAM END =====" << endl;

    return 0;
}
