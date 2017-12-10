#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED
#include<iostream>
using namespace std;

class Rational
{
private:
    int num;
    int den;
    void ReductFraction();

public:
    void create(int n,int d)
    {
        num=n;
        den=d;
        ReductFraction();
    }
    void add (const Rational &r1,const Rational &r2);
    void multi(const Rational &r1,const Rational &r2);
    void display()
    {
        cout<<num<<'/'<<den;
    }
};



#endif // RATIONAL_H_INCLUDED
