#include<iostream>
using namespace std;
class Ratno
{
    int p,q;
    public:
    Ratno(int a=0,int b=0)
    {
        p=a;
        q=b;
    }
    void setp(int p)
    {
        this->p=p;
    };
    void setq(int q)
    {
        this->q=q;
    };
    Ratno operator+ (Ratno r)
    {
        Ratno rn;
        rn.p=p*r.q+r.p*q;
        rn.q=q*r.q;
        return rn;
    }
    friend ostream & operator<<(ostream &o,Ratno r);

};
ostream & operator<<(ostream &o,Ratno r)
{
    o<<r.p<<"/"<<r.q;
    return o;
}
