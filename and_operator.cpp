#include<iostream>
using namespace std;
int main()
{
	//logicals operators
	int age;
	cout<<"ENTER THE AGE:"<<endl;
	cin>>age;
	 if(age>=18 &&age<=30)//and operator
	 {
	 	cout<<" you are in the young age group "<<endl;

	 }
	 else
	 {
	 	cout<<"you are not in  the young age group"<<endl;
	 }

//example 2

cout<<"==========and opertor========\n"<<endl;

    string username;
	int password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == 1234) {
        cout << "Login successful";
    } else {
        cout << "Invalid login";
    }
return 0;
}
