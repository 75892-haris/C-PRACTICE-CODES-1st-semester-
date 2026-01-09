#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number=15;
	int*ptr=&number;
	cout<<ptr<<endl;
	cout<<number<<endl;
	cout<<&number<<endl;
	string d="haris";
	cout<<d<<endl;
	cout<<&d<<endl;
	char z='H';
	cout<<z<<endl;
	cout<<&z<<endl;
	return 0;
	
}
