#include<iostream>
using namespace std;
void add(int number1, int number2);
main()
{
int number1;
int number2;
cout<<"enter first number"<<endl;
cin>>number1;
cout<<"enter second number:"<<endl;
cin>>number2;
add(number1,number2);
}
void add(int number1, int number2)
{
int sum;
sum=number1+number2;
cout<<"sum is ..."<<sum<<endl;
}