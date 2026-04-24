#include<iostream>
using namespace  std;
int main()
{
	
	//int i=0;
	//for(initialization; condition; increment/decrement) 
	
	for(int i = 1; i <= 5; i++) {
    cout << i << endl;
}
cout<<" ----------table of any number ----------"<<endl;
int num;
cout<<"enter the number:"<<endl;
cin>>num;
for(int i=1;i<10;i++)
{
	cout << num << " x " << i << " = " << num * i << endl;
}

	return 0;
}

