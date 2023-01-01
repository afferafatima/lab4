#include<iostream>
using namespace std;
void totalamount(string day,float amount);

main()
{
string day;
float amount;
while(true)
{
cout << " Enter day : " ;
cin >> day ;
cout << " Enter purchase amount :";
cin >> amount;
cout << " Your bill is : " ;
totalamount(day,amount);
}
}


void totalamount(string day,float amount){
	 if ( day == "sunday"){
	 amount=amount-amount*0.1;
	}
	 if (day!="sunday"){
	 amount=amount-amount*0.05;
	}
 	cout << amount << endl;

}
