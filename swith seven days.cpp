#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"enter the no of day you want in week ";
	cin>>day;
	switch(day)
	{
		case 1:
			cout<<"Monday";
			break;
	case 2:
		cout<<"Tuesday";
		break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"thursday";
			break;
			case 5:
				cout<<"Friday";
				break;
				case 6:
					cout<<"saturday";
					break;
					case 7:
						cout<<"sunday";
						break;
						default:
							cout<<"seven days in a week";
							break;
						}
							return 0;
						}
