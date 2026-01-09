#include<iostream>
using namespace std;
int main()
{
	int o;
	double num1,num2;
	cout<<"enter 1st number: ";
	cin>>num1;
	cout<<"enter first number";
	cin>>num2;
	cout<<"enter operator for opeartion";
	cin>>o;
	switch(o)
	{
		case 1:
			cout<<"sum of 1and 2"<<num1+num2;
			break;
			case 2:
				cout<<"difference of 1 and 2"<<num1-num2;
				break;
				case 3:
					cout<<"product of 1 and 2"<<num1*num2;
					break;
					case 4:
						cout<<"division of 1 and 2"<<num1/num2;
						break;
	}
	return 0;
}

