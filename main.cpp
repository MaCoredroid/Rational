#include<iostream>
using namespace std;
#include "rational.h"
int main()
{
    int n,d;
    Rational r1,r2,r3;
    cout<<"Please input the first rational(num den):";
    cin>>n>>d;
    r1.create(n,d);

    cout<<"Please input the first rational(num den):";
    cin>>n>>d;
    r2.create(n,d);

    r3.add(r1,r2);
    r1.display();
    cout<<"+";
    r2.display();
    cout<<"=";
    r3.display();
    cout<<endl;

    r3.multi(r1,r2);
    r1.display();
    cout<<"*";
    r2.display();
    cout<<"=";
    r3.display();
    cout<<endl;

    return 0;



}
