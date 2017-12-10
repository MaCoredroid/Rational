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
    Rational(int a=0,int b=1):num(a),den(b)
    {
        void ReductFraction();
    }
    void add (const Rational &r1,const Rational &r2);
    void multi(const Rational &r1,const Rational &r2);
    void display()
    {
        cout<<num<<'/'<<den;
    }
};



#endif // RATIONAL_H_INCLUDED
