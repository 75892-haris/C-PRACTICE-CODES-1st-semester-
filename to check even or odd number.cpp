#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter anumber:";
	cin>>a;
	if(a%2==0)
	{
		cout<<a<<" is an even number";
	}
	else if(a%2!=0)
	{
		cout<<a<<" is an odd number";
	}
	else if(a=0)
	{
		cout<<a<<"  is odd number ";
	}
	
	return 0;
}
