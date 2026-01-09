#include<iostream>
using namespace std;
int main()
{
	char op;
	double num1,num2;
	cout<<"enter first number";
	cin>>num1;
	cout<<"enter second number";
	cin>>num2;
	cout<<"enter operator for opeartion";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"sum of 1and 2"<<num1+num2;
			break;
			case '-':
				cout<<"difference of 1 and 2"<<num1-num2;
				break;
				case '*':
					cout<<"product of 1 and 2"<<num1*num2;
					break;
					case '/':
						cout<<"division of 1 and 2"<<num1/num2;
						break;
	}
	return 0;
}

