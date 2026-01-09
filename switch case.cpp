#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter your grade";
	cin>>grade;
	switch(grade)
	{
		case 'A':
			cout<<"1st"; 
			break;
			case 'B':
			cout<<"2nd";
			break;
			case 'C':
			cout<<"3rd";
			break;
	}
	return 0;
}
