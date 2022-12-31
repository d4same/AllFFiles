#include<iostream>
using namespace std;
void mark(int sub1, int sub2, int sub3, int sub4, int sub5);
main()
{
 int sub1;
 int sub2;
 int sub3;
 int sub4;
 int sub5;
 int result;
 cout<<"enter the marks of first subjct"<<endl;
 cin>>sub1;
 cout<<"enter the marks of second subject"<<endl;
 cin>>sub2;
 cout<<"enter the marks of third subject:"<<endl;
 cin>>sub3;
 cout<<"enter the marks of fourth subject"<<endl;
 cin>>sub4;
 cout<<"enter the marks of fifthe subject"<<endl;
 cin>>sub5;
 mark(sub1,sub2,sub3,sub4,sub5);
}
 void mark(int sub1, int sub2, int sub3, int sub4, int sub5)
{
 int sum;
 sum=sub1+sub2+sub3+sub4+sub5;
 cout<<"marks in all subject is..."<<sum<<endl;
}