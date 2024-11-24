#include "class Ratno.h"
int main()
{
    int a,b,c,d;
    cout<<"enter p and q for rational no. 1: ";
    cin>>a>>b;
    Ratno r1(a,b);
    cout<<"enter p and q for rational no. 2: ";
    cin>>c>>d;
    Ratno r2(c,d);
    Ratno r3;
    r3=r1+r2;
    cout<<r3<<endl;
}