#include<iostream>
using namespace std;
int main()
{
	int sec,d,hh,mm,ss;
	cin>>sec;
	ss=sec%60;
	mm=(sec/60)%60;
	hh=(sec/60)/60%24;
	d=((sec/60)/60)/24;
	cout<<d<<":"<<hh<<":"<<mm<<":"<<ss;
	return 0;
}
