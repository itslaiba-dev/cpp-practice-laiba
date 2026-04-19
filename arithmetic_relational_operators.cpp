#include<iostream>
using namespace std ;
int main()
{
	// Operators in C++
  // Arithmetic operators
  
	int a;
	int b;
  
	cout<<"enter the value for a:"<<endl;
	cin>>a;
	cout<<"enter the value for b:"<<endl;
	cin>>b;

	 cout<<"addition  is :\n"<<a+b<<endl;
	 cout<<"suntraction is :\n"<<a-b<<endl;
	 cout<<"multiplication is:\n"<<a*b<<endl;
	 cout<<"division is :\n"<<a/b<<endl;
	 cout<<"modulus is :\n"<<a%b<<endl;

   // Relational Operators
   cout<<"-----rational operators detail-----\n"<<endl;
  
   //0 for true
   //1 for false
  
  cout << (a < b)<<endl;
  cout << (a == b)<<endl;
  cout << (a >b)<<endl;
  cout << (a <= b)<<endl;
  cout << (a >=b)<<endl;
  cout << (a != b)<<endl;

	return 0;
}
