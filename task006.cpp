#include<iostream>
using namespace std;
void shoping(std day, int totalpayableamount);
main()
{
string day;
int totalpayableamount;
cout<<"enter the day"<<endl;
cin>>day;
cout<<"enter totalpayableamount"<<endl;
cin>>totalpayableamount;
shoping(day,totalpayableamount);
}
 void shoping(string day, int totalpayableamount)
{
 if(day=="sunday")
 {
 int discount;
 int amount;
 discount=totalpayableamountL*10/100;
 amount=totalpayableamount-discount;
 cout<<"total payable amount with discoutn"<<amount<<endl;
 }
 if(day=="monday")
 {
  cout<<"total payable amount is.."<<totalpayableamount<<endl;
 }
}
                            
