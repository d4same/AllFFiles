#include<iostream>
using namespace std;
void para(int number1, int number2);
main()
{
 int number1;
 int number2;
 cout<<"enter a number:"<<endl;
 cin>>number1;
 cout<<"enter a number"<<endl;
 cin>>number2;
 para(number1,number2);
}
 void para(int number1, int number2)
{
 int sum;
 sum=number1+number2;
 cout<<"sum is..."<<sum<<endl;
 }