#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

int main()
{
    float a,b,ans;
    cout<<"enter values of a and b"<<"\n";
    cin>>a>>b;
    ans=(a*0.10)+(b*0.25);
    cout<<fixed<<setprecision(2)<<ans;

    return 0;
}

