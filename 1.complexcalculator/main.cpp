#include <iostream>
#include"Complex.h"
using namespace std;

int main()
{
   double a,b;
    int opt;

   do
    {
     cout<<"\n___________________________________________________________________________________________________________________\n";
    cout<<"Enter \n0-QUIT \n 1-sum         2-difference           3-multiplication  \n4-division  5-division with real number  6-get inverse \n";
     cout<<"7-incrementing real by 1   8-decrementing real by 1     9-increment imaginery part by 1\n10-decrement imaginery part by 1  ";
     cout<<"11-Compare norms";
    cout<<"\n___________________________________________________________________________________________________________________\n";
    cout<<"\nYour Choice\n";
    cin>>opt;
    switch(opt)
    {
  case 0:  break;
  case 1:{
          cout<<"\n SUM\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          cout<<"\n Enter second number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex h(a,b);
          cout<<"G "<<&g<<endl;
          cout<<"H "<<&h<<endl;
          Complex* i=g+h;
          cout<<"I "<<i<<endl;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
          break;

         }
   case 2:{
          cout<<"\n DIFFERENCE\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          cout<<"\n Enter second number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex h(a,b);
          Complex i=g-h;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
            break;
         }
      case 3:{
          cout<<"\n MULTIPLICATION\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          cout<<"\n Enter second number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex h(a,b);
          Complex i=g*h;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
           break;
         }
       case 4:{
          cout<<"\n DIVISION\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          cout<<"\n Enter second number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex h(a,b);
          Complex i=g/h;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
           break;
         }
         case 5:{
           double d;
          cout<<"\n DIVISION BY PURE REAL NUMBER\n Enter number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          cout<<"\n Enter real divisor\n";
          cin>>d;

          Complex i=g/d;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
           break;
         }
        case 6:{
          cout<<"\n INVERSE\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          Complex i=-g;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
           break;
         }
         case 7:{
             cout<<"\n INCREMENT REAL PARTBY 1\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          Complex i=++g;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
           break;
         }
         case 8:{
             cout<<"\n DECREMENT REAL PARTBY 1\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          Complex i=--g;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
          break;
         }
         case 9:
            {
           cout<<"\n INCREMENT IMAGINARY PARTBY 1\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          Complex i=g++;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
           break;
            }
        case 10:
            {
           cout<<"\n DECREMENT IMAGINARY PARTBY 1\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          Complex i=g--;
          cout<<"\n\nAnswer="<<i<<"\n***********************************************\n";
           break;
            }
        case 11:{

          cout<<"\n COMPARE TWO NUMBERS'NORM\n Enter first number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex g(a,b);
          cout<<"\n Enter second number(realpart (space) imaginarypart )\n";
          cin>>a>>b;
          Complex h(a,b);
           double c=g.operator*();
           double d=h.operator*();
          if(c>d){cout<<"First number is greater than Second\n";}
          else if(c==d){cout<<"First number is equal to Second\n";}
          else{cout<<"First number is less than Second\n";}

            break;
         }
        default:
            {
               cout<<"Choice is invalid "<<endl;
               break;
            }
    }
    }while(opt!=0);

   return 1;
}
