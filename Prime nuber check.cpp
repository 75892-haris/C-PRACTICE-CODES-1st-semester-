#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter number to check prime or not"<<endl;
	cin>>number;
	for(int i=0;i>=0;i++)
	{	if(number/i==1)
	
		{
			cout<<number<<" is a prime number"<<endl;
		}
		else if(number/i!=1)
		{
			cout<<number<<" is not prime"<<endl;
		}
	}
	return 0;
}
