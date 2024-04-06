#include<iostream>

using namespace std;

int main()
{
    char op;
    double num1,num2;

    cout<<"Enter operator(+,-,*,/):";
    cin>>op;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;

    switch(op)
    {
        case'+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        cout<<"     Addition of two numbers : "<<num1+num2;
        break;

        case'-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        cout<<"     Subtraction of two numbers : "<<num1-num2;
        break;

        case'*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        cout<<"     Multiplication of two numbers : "<<num1*num2;
		break;

        case'/':
          if(num2!=0)
        cout<<num1<<"/"<<num2<<"/"<<num1/num2;
          else
          cout<<"Error! Division by zero!";
          cout<<"   Division of two numbers : "<<num1/num2;
          break;

          default:

          cout<<"Invalid operator!";
          break;
    }
    return 0;
}
