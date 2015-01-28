#include <iostream>
#include <math.h>
#include"Complex.h"
using namespace std;

const Complex Complex::sc_cUnityR(1,0);
const Complex Complex::sc_cUnityI(0,1);
const Complex Complex::sc_cZero(0,0);

Complex::Complex(double r,double i)
:re_(r),im_(i)
{
}
Complex::Complex(const Complex& f)
{
    re_=f.re_;
    im_=f.im_;
}
Complex::~Complex()
{
}
Complex& Complex::operator=(const Complex& c)
{
    re_=c.re_;
    im_=c.im_;
    return (*this);
}
Complex Complex::operator+(const Complex& c)
{
 Complex d;
 d.re_=re_+c.re_;
 d.im_=im_+c.im_;
 return d;
}
Complex Complex::operator-(const Complex& c)
{
 Complex d;
 d.re_=re_-c.re_;
 d.im_=im_-c.im_;
 return d;
}
Complex Complex::operator*(const Complex& c)
{
 Complex d;
 d.re_=re_*c.re_-im_*c.im_;
 d.im_=im_*c.re_+re_*c.im_;
 return d;
}
Complex Complex::operator/(const Complex& c)
{
  Complex d;
  double deno=c.re_*c.re_+c.im_*c.im_;
  d.re_=(re_*c.re_+im_*c.im_)/deno;
  d.im_=(c.re_*im_-c.im_*re_)/deno;
  return d;
}
Complex Complex::operator/(double f)
{
  Complex d;
  d.re_=re_/f;
  d.im_=im_/f;
  return d;
}

Complex& Complex::operator--()
{
    re_--;
    return (*this);
}
Complex& Complex::operator++()
{
    re_++;
    return *this;
}
Complex Complex::operator++(int p)
{
    im_++;
    return (*this);
}
Complex Complex::operator--(int p)
{
    im_--;
    return (*this);
}
bool Complex::operator==(const Complex& c)
{
    if((this->operator*())==c.operator*())
     return 1;
    else
     return 0;
}
bool Complex::operator!=(const Complex& c)
{
    if((this->operator*())==c.operator*())
     return 0;
    else
     return 1;
}
bool Complex::operator<(const Complex& c)
{
    if((this->operator*())<(c.operator*()))
     return 1;
    else
     return 0;
}
bool Complex::operator<=(const Complex& c)
{
    if((this->operator*())<=(c.operator*()))
     return 1;
    else
     return 0;
}
bool Complex::operator>(const Complex& c)
{
    if((this->operator*())>(c.operator*()))
     return 1;
    else
     return 0;
}
bool Complex::operator>=(const Complex& c)
{
    if((this->operator*())>=(c.operator*()))
     return 1;
    else
     return 0;
}
Complex& Complex::operator+=(const Complex& c)
{
  re_+=c.re_;
  im_+=c.im_;
  return (*this);
}
Complex& Complex::operator-=(const Complex& c)
{
  re_-=c.re_;
  im_-=c.im_;
  return (*this);
}
Complex& Complex::operator*=(const Complex& c)
{
  double tre=re_;
  re_=re_*c.re_-im_*c.im_;
  im_=tre*c.im_+im_*c.re_;
  return (*this);
}
Complex& Complex::operator/=(const Complex& c)
{
   double tre=re_;
  double deno=c.re_*c.re_+c.im_*c.im_;
  re_=(re_*c.re_+im_*c.im_)/deno;
  im_=(c.re_*im_-c.im_*tre)/deno;
  return *this;
}
double Complex::operator*() const
{
   double d;
   d=sqrt(re_*re_+im_*im_);
   return d;
}
Complex Complex::operator!() const
{
   Complex d;
   d.re_=re_;
   d.im_=-im_;
   return d;
}
ostream& operator<<(ostream& os, const Complex& c)
{
  os<<c.re_<<"+i"<<c.im_<<endl;

  return os;
}
istream& operator>>(istream& is, Complex& c)
{
  is>>c.re_;
  is>>c.im_;
  return is;

}


