#include<iostream>
using namespace std;
int main()
{
	int item1,item2,item3;
	double total_cost,final_cost;
	cout<<"enter items cost	"<<endl;
	cin>>item1;
	cin>>item2;
	cin>>item3;
	total_cost=item1+item2+item3;
	if(item1+item2+item3>=100)
	{
		cout<<"10% discount"<<endl;
		cout<<"your cost"<<endl;
		final_cost=total_cost-(total_cost*0.10);
	}
	else
	{
		total_cost=final_cost;
	}
	cout<<final_cost;
	return 0;	
}
