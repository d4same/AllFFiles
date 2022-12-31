#include<iostream>
using namespace std;
void add();
void add1();
main()
{
add();
add1();
}
void add()
{
 int number1;
 int number2;
 int sum;
 cout<<"enter first number"<<endl;
 cin>>number1;
 cout<<"enter second number"<<endl;
 cin>>number2;
 sum=number1+number2;
 cout<<"sum..."<<sum<<endl;
}
void add1()
{
   int number3;
   int number4;
   int sum1;
   cout<<"enter number"<<endl;
   cin>>number3;
   cout<<"enter number"<<endl;
   cin>>number4;
  sum1=number3+number4;
  cout<<"sum is.."<<sum1;
}