
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter marks:"<<endl;
	cin>>marks;
	if 
	(marks>=90 && marks<=100)//if this condition satisfies than the result will be displayed else 
	{
	cout<<"grade A+"<<endl;}
	 else if
	 (marks>=80 && marks<=89)
	{
	cout<<"grade A"<<endl;}
	else if (marks>=70 && marks<=79)
	{
	cout<<"grade B"<<endl;}
	else if (marks>=60 && marks<=69)
	{
	cout<<"grade C";}
	else if (marks>=50 && marks<=59)//the other result will be 
	{
		cout<<"grade D"<<endl;
	}
	else if (marks>=0 && marks<=49)
{	cout<<"grade F"<<endl;}
	return 0;
}
