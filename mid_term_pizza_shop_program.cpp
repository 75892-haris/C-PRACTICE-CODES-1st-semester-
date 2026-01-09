#include<iostream>
using namespace std;
int main()
{
	int pizza;
	double totalcost;
	double topping_cost;
	cout<<"Pizza selection"<<endl;
	cout<<"Select the pizza you want"<<endl;
	cout<<"Press 1 for small pizza=850 Pkr"<<endl;
	cout<<"Press 2 for medium pizza=1350 PKr "<<endl;
	cout<<"Press 3 for Large Pizza =2199 Pkr"<<endl;
	cout<<"Press 4 for extra large Pizza =2850 Pkr"<<endl;
	cin>>pizza;
	switch(pizza)
	{
		case 1:
		cout<<"Small pizza selected for 850 Pkr"<<endl;
		break;
		case 2:
			cout<<"Medium pizza selected for 1350 Pkr"<<endl;
			break;
			case 3:
			cout<<"Large Pizza selected for 2199 Pkr"<<endl;
			break;
			case 4:
				cout<<"Extra large Pizza selected for 2850 Pkr"<<endl;
				break;
			
	}
	int pizza_cost;
	if(pizza==1)
	{
		pizza_cost=850;
	}
	else if(pizza==2)
	{
		pizza_cost==1350;
	}
	else if(pizza==3)
	{
		pizza_cost=2199;
	}
	else if(pizza==4)
	{
		pizza_cost=2850;
	}
	cout<<"Press 1 to add extra topping for 150 PKr only"<<endl;
	cout<<"Press 2 to cancel"<<endl;
	int topping;
	cin>>topping;
	switch(topping)
	{
		case 1:
			cout<<"Topping added for 150 pkr"<<endl;
			break;
			case 2:
				cout<<endl;
				break;
				
	}
	if(topping==1)
	{
		topping_cost=150;
	}
	else if(topping==2)
	{
		topping_cost=0;
	}
	totalcost=pizza_cost+topping_cost;
	cout<<"Total cost without tax :"<<totalcost<<endl;
	int payment;
	cout<<"press 1 to pay with cash "<<endl;
	cout<<" press 2 to pay with card"<<endl;
	double finalcost_cash=totalcost*0.16;
	double finalcost_card=totalcost*0.06;
	double final_cost;
	cin>>payment;
	switch(payment)
	{
		case 1:
			cout<<"YOur final cost with cash :"<<endl;
			break;
			case 2:
				cout<<"Your final cost with card :"<<endl;
					break;
	default:
 cout<<" enter 1 or 2"<<endl;
 				
	}
if(payment==1)
{
	final_cost=totalcost+finalcost_cash;
	cout<<final_cost;
}
if(payment==2)
{
	final_cost=totalcost+finalcost_card;
	cout<<final_cost;
}
return 0;
}
