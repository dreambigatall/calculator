#include <iostream>
using namespace std;
class calculatore
{
public:
void setValue(int x, int y);

void getAdd(int v);
void getSubtract(int v);
void getMult(int v);
void getDive(int v);
//calculatore(int d, int g);
private:
int num1;
int num2;
};
int main()
{ cout<<"**** THIS Calculatore App By OOP"<<endl;
 int a, b, c;
 char sighn;
 calculatore calc;
 c=1;
 int value;
 while(c!=0)
   {
     cout<<"enter firstNumber\t";
     cin>>a;
     cout<<"enter any opratwer from the following "<<"\n"<<"+"<<'\n'<<'-'<<'\n'<<'*'<<'\n'<<'/'<<endl;
     cin>>sighn;
     switch(sighn)
     {
       case '+':cout<<"enter your second number ";
         cin>>b;
         calc.setValue(a,b);
         calc.getAdd(value);
         break;
       case '-':cout<<"enter your second number ";
               cin>>b;
                calc.setValue(a,b);
                 calc.getSubtract(value);
                break;
       case '*':cout<<"enter your second number ";
                cin>>b;
                 calc.setValue(a,b);
                 calc.getMult(value);
                break;
       case '/':cout<<"enter your second number ";
                cin>>b;
                calc.setValue(a,b);
                calc.getDive(value);
               break;
       defult: cout<<"enter the corrbrect choose"<<endl;
     }
     cout<<"to continnue enter any number diffrent from zero ";
     cin>>c;
   }
  return 0;

}
void calculatore::setValue(int x, int y)
{
  num1=x;
  num2=y;
}
void calculatore::getAdd(int v)
{
  v=num1 + num2;
  cout<<"the sum is "<<v<<endl;
}
void calculatore::getSubtract(int v)
     {
       v=num1-num2;
      cout<<"the subtraction is "<<v<<endl;
     }
void calculatore::getMult(int v)
{
  v=num1 * num2;
  cout<<"the mutuiplication is "<<v<<endl;
}
void  calculatore::getDive(int v)
{
  v = num1/num2;
  cout<<"the division is "<<v<<endl;
}