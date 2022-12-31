#include<iostream>
using namespace std;
void input(int number);
main()
{
 int number;
 cout<<"enter a number:"<<endl;
 cin>>number;
 if(number>50)
 {
 input(number);
 }
 if(number<50)
 {
 cout<<"number is failed to pass"<<endl;
 }
}
 void input(int number)
 {
 int number2;
 int sum;
 cout<<"enter a number"<<endl;
 cin>>number2;
 sum=number+number2;
 cout<<"sum is..."<<sum<<endl;
}