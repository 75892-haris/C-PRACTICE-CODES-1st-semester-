#include<iostream>
using namespace std;
int main()
{
	int array[][2]={{4,5},{7,8}}; //second must have [2] ....first[2]
	for(int a=0;a<2;a++)
	{
		
		for(int b=0;b<2;b++)
		{
			cout<<"array["<<a<<"]"<<"array["<<b<<"]"<<array[a][b]<<endl;
		}
	
	}
	return 0;
}
