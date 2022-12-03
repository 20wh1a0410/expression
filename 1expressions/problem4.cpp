#include <iostream>

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float area,s,s1,s2,s3,x;
    cout<<"enter sides of a triangle"<<"\n";
    cin>>s1>>s2>>s3;
    s=(s1+s2+s3)/2;
    x=s*(s-s1)*(s-s2)*(s-s3);
    area=sqrt(x);
    cout<<"area of the triangle is"<<" "<<area;

    return 0;
}

