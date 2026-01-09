#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter your age:";
	cin>>a;
	if(a>=1 && a<=12)
	{
		cout<<"you are child"<<endl;//will show you are akid or teen ager
	}
	else if(a>=13 && a<=19)
	{
		cout<<"you are teenager"<<endl;
	}
	else if(a>=20 && a<=40)
	{
		cout<<"you are adult"<<endl;//this will satisfy if other condition is  not satisfied
	}
	else if (a>=41 && a>50)
	{
		cout<<"you are old"<<endl;
	}

	return 0;
}
