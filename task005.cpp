#include<iostream>
using namespace std;
void larger(int number1, int number2);
main()
{
 int number1;
 int number2;
 cout<<"enter number1"<<endl;
 cin>>number1;
 cout<<"enter number2"<<endl;
 cin>>number2;
 larger(number1,number2);
}
void larger(int number1, int number2)
{
 if(number1>number2)
 {
 cout<<"number1 larger"<<endl;
 }
 if(number1<number2)
 {
 cout<<"number 2 larger"<<endl;
 }
}