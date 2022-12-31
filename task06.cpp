#include<iostream>
using namespace std;
main()
{
 string day;
 int amount;
 int discount;
 int payamount;
 cout<<"enter the day"<<endl;
 cin>>day;
 cout<<"enter total shoping amount"<<endl;
 cin>>amount;
 if(day=="sunday")
 {
 discount=amount*10/100;
 payamount=amount-discount;
 cout<<"your payable amount is...."<<payamount<<endl;
 }
}