#include<iostream>
using namespace std;
int main()
{
	int choice;
	int num1,num2,result;
	cout<<" press 1 for add operations"<<endl;
	cout<<"press 2 for substraction"<<endl;
	cout<<" press 3 to exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<" enter two numbers for addition"<<endl;
			cin>>num1>>num2;
			result=num1+num2;
			cout<<"sum is"<<result;
			break;
			case 2:
				cout<<"enter two numbers for substraction"<<endl;
				cin>>num1>>num2;
				result=num1-num2;
				cout<<"difference is"<<result;
				break;
				case 3:
					cout<<"  exiting program";
					break;
					default:
						cout<<"invalid input number ! try again";
						break;
						
	}
	return 0;
	
}
