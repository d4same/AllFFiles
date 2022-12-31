#include<iostream>
using namespace std;
void age();
main()
{
age();
}
void age()
{
 int age;
 cout<<"enter your age"<<endl;
 cin>>age;
 if(age>=18)
 {
  cout<<"your are eligible to vote"<<endl;
  }
 if(age<18)
 {
 cout<<"your are not eligible"<<endl;
 }
}