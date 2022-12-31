#include<iostream>
using namespace std;
void add(int number1, int number2);
void sub(int number1, int number2);
void mul(int number1, int number2);
void dev(int number1, int number2);
main()
{
  int number1;
  int number2;
  char operation;
  cout<<"enter number:"<<endl;
  cin>>number1;
  cout<<"enter number:"<<endl;
  cin>>number2;
  cout<<"enter operation"<<endl;
  cin>>operation;
 if(operation=='+')
 {
 add(number1,number2);
 }
 if(operation=='-') 
 {
 sub(number1,number2);
 }
 if(operation=='*')
 {
 mul(number1,number2);
 }
 if(operation=='/')
 {
 dev(number1,number2);
 }
}
 void add(int number1, int number2)
 {
 int sum;
 sum=number1+number2;
 cout<<"sum is..."<<sum<<endl;
 }
 void sub(int number1, int number2)
 {
 int sub;
 sub=number1-number2;
 cout<<"subtraction is.."<<sub<<endl;
 }
 void mul(int number1, int number2)
 {
 int mul;
 mul=number1*number2;
 cout<<"mul is...:"<<mul<<endl;
 }
 void dev(int number1, int number2)
 {
 int dev;
 dev=number1/number2;
 cout<<"mul is...:"<<dev<<endl;
 }