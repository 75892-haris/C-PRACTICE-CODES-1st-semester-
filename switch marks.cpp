#include<iostream>
using namespace std;
int main()
{
	int a=80;
	int b=90;
	int c=90;
	int marks;
	cout<<"press 1 for ict marks"<<endl;
	cout<<"press 2 for pf marks"<<endl;
	cout<<"press 3 for oop marks "<<endl;
	cin>>marks;
	switch(marks)
	{
		case 1:
			cout<<"ict marks:"<<a;
			break;
			case 2:
				cout<<"pf marks:"<<b;
				break;
				case 3:
				cout<<"oop marks:"<<c;
				break;
	}
	return 0;
}
