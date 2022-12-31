#include<iostream>
using namespace std;
void iseven(int number);
main()
{
 int number;
 cout<<"enter a number"<<endl;
 cin>>number;
 if(number%2==0)
 { 
 iseven(number);
 }
 if(number%2==1)
 {
 cout<<"number is odd"<<endl;
 }
}
 void iseven(int number)
 { 
 cout<<"number is even"<<endl;
 }