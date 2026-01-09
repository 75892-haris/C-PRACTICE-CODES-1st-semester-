#include<iostream>
using namespace std;
int main()
{
	int choice;
	do{
		cout<<"menu  "<<endl;
		cout<<" 1.say assalmo alikum"<<endl;
		cout<<" 2.say HARIS"<<endl;
		cout<<"  3.EXIT"<<endl;
		cout<<" enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"ASSalamo alaikum";
				break;
				case 2:
					cout<<"my name is haris";
					break;
					case 3:
						cout<<"Exiting program";
						break;
						default:
							cout<<"invalid choice";
							break;
						}
						
					
		}while(choice!=3);
			return 0;
	}