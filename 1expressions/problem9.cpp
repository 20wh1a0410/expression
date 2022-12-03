#include<iostream>
using namespace  std;
int main()
{
	float i,inches,yards,miles;
	cin>>i;
	inches=12*i;
	yards=0.333*i;
	miles=i/5280;
	cout<<inches<<"\n"<<yards<<"\n"<<miles;
	return 0;
}
