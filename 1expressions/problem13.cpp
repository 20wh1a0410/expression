#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cin>>n;
	sum=(n%10)+((n/10)%10)+((n/100)%10)+(n/1000);
	cout<<sum;
	return 0;
	
}
