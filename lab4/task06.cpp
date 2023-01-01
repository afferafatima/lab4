#include<iostream>
using namespace std;
void greaternumber(int number1 , int number2);
main(){
while (true){
 int number1;
 int number2;
cout << " Enter number1 : " ;
cin >> number1;
cout << " Enter number2 : " ;
cin >> number2;
 greaternumber(number1,number2);
}
}
void greaternumber(int number1 , int number2){
 if ( number1 > number2)  
cout << " number 1 is greater."<<endl;
if ( number1 < number2)  
cout << " number 2 is greater."<<endl;
}

 
 