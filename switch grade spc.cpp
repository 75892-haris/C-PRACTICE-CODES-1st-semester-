#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"  enter your  marks;";
	cin>>marks;
	if(marks<0 || marks >100)
{
	cout<<"ENTER MARKS BETWEEN ZERO AND 100";
	return 0;
}
	char grade;
	grade=marks/10;
	switch(grade)
	{
		case 10:
			cout<<"100 marks a+";
			break;
			case 9:
				cout<<" GRADE A";
				break;
				case 8:
					cout<<" GRADE B";
					break;
					case 7:
						cout<<" GRADE C";
						break;
						case 6:
							cout<<" Grade D";
							break;
							default:
							cout<<" grade F fail";
							break;
							
	}
	return 0;
	
}
