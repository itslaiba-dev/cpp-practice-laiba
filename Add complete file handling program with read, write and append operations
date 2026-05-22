#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    int id;
    string name;
    float marks;
};

int main()
{
    // =========================================
    // WRITE DATA INTO FILE
    // =========================================

    ofstream outFile("students.txt", ios::app);

    if(!outFile)
    {
        cout << "File not created!" << endl;
        return 0;
    }

    Student s;

    cout << "===== ENTER STUDENT DATA =====" << endl;

    cout << "Enter ID: ";
    cin >> s.id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Marks: ";
    cin >> s.marks;

    outFile << s.id << " " << s.name << " " << s.marks << endl;

    outFile.close();

    cout << "\nData Saved Successfully!" << endl;


    // =========================================
    // READ DATA FROM FILE
    // =========================================

    ifstream inFile("students.txt");

    if(!inFile)
    {
        cout << "File not found!" << endl;
        return 0;
    }

    cout << "\n===== ALL STUDENTS DATA FROM FILE =====" << endl;

    Student temp;

    while(inFile >> temp.id >> temp.name >> temp.marks)
    {
        cout << "\nID: " << temp.id << endl;
        cout << "Name: " << temp.name << endl;
        cout << "Marks: " << temp.marks << endl;
    }

    inFile.close();


    // =========================================
    // SEARCH IN FILE
    // =========================================

    int searchId;
    bool found = false;

    cout << "\nEnter ID to Search: ";
    cin >> searchId;

    ifstream searchFile("students.txt");

    while(searchFile >> temp.id >> temp.name >> temp.marks)
    {
        if(temp.id == searchId)
        {
            cout << "\n===== STUDENT FOUND =====" << endl;
            cout << "ID: " << temp.id << endl;
            cout << "Name: " << temp.name << endl;
            cout << "Marks: " << temp.marks << endl;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Student Not Found!" << endl;
    }

    searchFile.close();


    // =========================================
    // END
    // =========================================

    cout << "\n===== PROGRAM END =====" << endl;

    return 0;
}
