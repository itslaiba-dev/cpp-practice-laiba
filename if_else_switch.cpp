#include<iostream>
using namespace std;
int main()
{
	//example 1
// conditions in c++
//if /else
	string name;
	int age ;

	cout<<"Enter the name: "<<endl;
	cin>>name;
	cout<<"Enter the age :"<<endl;
	cin>>age;


	if(age>=18)
	{
    cout<<"Eligible for vote"<<endl;
	}
	else
	{
    cout<<" not Eligible for vote "<<endl;

   }


//example 2
   cout<<" *---------------\npart 2\n--------------*"<<endl;
   int marks ;
   cout<<"Enter the marks:"<<endl;
	cin>>marks;

	if(marks>=80)
	{
		cout<<"A grade\n"<<endl;
	}
	else if(marks>=60)
	{
   cout<<"B grade\n"<<endl;

	}
	else if(marks >=40)
	{
		cout<<"C grade\n"<<endl;

	}
	else
	{
		cout<<"fail\n"<<endl;
	}
//example 3
cout<<"*----------\npart 3 for switch case\n----------\n"<<endl;
int days;
cout<<"Enter the days from (1-7)\n"<<endl;
cin>>days;
switch(days)
{
	case 1 :
		cout<<"MONDAY"<<endl;
		break; // use for exit switch after matching case
		case 2 :
		cout<<"TUESDAY"<<endl;
		break;
		case 3 :
		cout<<"WEDNESDAY"<<endl;
		break;
		case 4 :
		cout<<"THURSDAY"<<endl;
		break;
		case 5 :
		cout<<"FRIDAY"<<endl;
		break;
		case 6:
		cout<<"SATURDAY"<<endl;
		break;
		case 7:
		cout<<"SUNDAY"<<endl;
		break;
		default:
		cout<<"invalid input"<<endl;
		break;

}
//example 4
cout<<"*---------------\n part  4\n---------------\n"<<endl;
int a;
int b;
int choice;

cout<<"Enter the value for A:"<<endl;
cin>>a;
cout<<"Enter the value for B:"<<endl;
cin>>b;
cout<<"======select 1 from====== "<<endl;
 cout << "1. Add\n   2. Subtract\n   3. Multiply\n  4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << a + b;
            break;
        case 2:
            cout << "Result: " << a - b;
            break;
        case 3:
            cout << "Result: " << a * b;
            break;
        case 4:
            if(b != 0)//more condition
                cout << "Result: " << a / b;
            else
                cout << "Cannot divide by zero";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
