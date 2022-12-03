#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;

int main()
{
	float i;
	float yr1,yr2,yr3;
	cout<<"enter initial amount"<<"\n";
	cin>>i;
	yr1=i*(pow((1 + 0.04), 1))-i;
	yr2=i*(pow((1 + 0.04), 2))-i;
	yr3=i*(pow((1 + 0.04), 3))-i;
    cout<<fixed<<setprecision(2)<<yr1<<"\n"<<yr2<<"\n"<<yr3;

    return 0;
}



