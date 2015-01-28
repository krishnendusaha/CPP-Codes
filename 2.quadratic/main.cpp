#include <iostream>
#include<math.h>
#include<setjmp.h>
#include "Complex.h"
jmp_buf jb;
using namespace std;
void solve_quadratic(double ,double ,double );
int main()
{
  int op;
  cout<<"Enter ->1 to see program with try-catch Enter ->2 to see program with set jump\n";
  cin>>op;
  //*******************
  if(op==1)
  {
      cout <<"\n\nBy try catch \n\n";
   try
   {
    double a,b,c;
    Complex root3,root4;
    cout<<"Quadratic Equation ax^2+bx+c :\n";
    cout << "Enter a:" << endl;
    cin>>a;
    if(a==0) throw 0;
    cout << "Enter b:" << endl;
    cin>>b;
    cout << "Enter c:" << endl;
    cin>>c;
    solve_quadratic(a,b,c);

  }
  catch(int )
  {
    cout<<"a cant be 0\n";
  }
  }
  //*********************************
  else
  {
   cout<<"\n\nBy setjmp longjmp \n \n";
   do{ jmp_buf ex_buf__;
    if( !setjmp(ex_buf__) )

   {
    double a,b,c;
    Complex root3,root4;
    cout<<"Quadratic Equation ax^2+bx+c :\n";
    cout << "Enter a:" << endl;
    cin>>a;
    if(a==0) longjmp(ex_buf__,1);
    cout << "Enter b:" << endl;
    cin>>b;
    cout << "Enter c:" << endl;
    cin>>c;
    solve_quadratic(a,b,c);

  }
  else {
       cout<<"a cant be 0\n";
       }
  }
  while(0);

  }
    return 0;
}
void solve_quadratic(double p,double q,double r)
{
   double disc=q*q-4*p*r;
    if(disc>=0)
    {

    double root1=(-q+sqrt(disc))/(2*p);
    double root2=(-q-sqrt(disc))/(2*p);
    cout<<"Root1="<<root1<<endl;
    cout<<"Root2="<<root2<<endl;
    }
    else
    {

      double c=-q/(2*p);
      double d=sqrt(-disc)/(2*p);
      Complex root3(c,d);
      Complex root4(c,-d);
      cout<<"Root1=";
      cout<<root3<<endl;
      cout<<"Root2=";
      cout<<root4<<endl;
     }
}
