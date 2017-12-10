#include"rational.h"
void Rational::add(const Rational &r1,const Rational &r2)
{
    num=r1.num*r2.den+r2.num*r1.den;
    den=r1.den*r2.den;
    ReductFraction();
}
void Rational::multi(const Rational &r1,const Rational &r2)
{
    num=r1.num*r2.num;
    den=r1.den*r2.den;
    ReductFraction();
}
 void Rational::ReductFraction()
 {
     int tmp=(num>den)?den:num;
     for(;tmp>1;--tmp)
     {
         if(num%tmp==0&&den%tmp==0)
         {
             num=num/tmp;
             den=den/tmp;
             break;
         }
     }
 }
