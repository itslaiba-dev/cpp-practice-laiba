#include<iostream>
using namespace std;
int main()
{
	//logicals operators
//example 1
cout<<"\n==========or opertor========\n"<<endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0 || num > 100) {
        cout << "Number is out of range (0-100)";
    } else {
        cout << "Number is within range";
    }
cout<<"\n==========or opertor========\n"<<endl;
//example 2
    
int math, english;

    cout << "Enter Math marks: ";
    cin >> math;

    cout << "Enter English marks: ";
    cin >> english;

    if(math >= 40 || english >= 40) {
        cout << "You passed in at least one subject";
    } else {
        cout << "You failed in both subjects";
    }

	return 0;
}
