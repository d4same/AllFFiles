#include<iostream>
using namespace std;
void sun(string day, int totalpurchase);
void oth(string day, int totalpurchase);
main()
{
 string day;
 int totalpurchase;
 cout<<"the day of shoping"<<endl;
 cin>>day;
 cout<<"total purchase"<<endl;
 cin>>totalpurchase;
while(true)
{
 if(day=="sunday")
 {
 sun(day,totalpurchase);
 }
 if(day=="monday,tuesday,thursday,friday")
 {
  oth(day,totalpurchase);
 }
}
}
void sun(string day, int totalpurchase)
 {
 int discount;
 int payableamount;
 discount=totalpurchase*10/100;
 payableamount=totalpurchase-discount;
 cout<<"payable amount is...."<<payableamount<<endl;
 }
 void oth(string day, int totalpurchase)
 {
 int discount1;
 int payableamount1;
 discount1=totalpurchase*5/100;
 payableamount1=totalpurchase-discount1;
 cout<<"payable amount is...."<<payableamount1;
 }
 