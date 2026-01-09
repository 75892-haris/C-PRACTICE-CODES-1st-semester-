#include<iostream>
using namespace std;
int main(){
	int m=10;
	int* pn=&m;
	cout<<" value of pointer before decrement : "<<pn<<endl;
	pn--;
	cout<<" value of pointer after decrement :"<<pn<<endl;
	cout<<" value of m :"<<m<<endl;
	return 0;
}
