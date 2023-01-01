#include<iostream>
using namespace std;
void multiply(int number1,int number2);
void add(int number1,int number2);
void subtract(int number1,int number2);
main()
{
 
 int number1;
 int number2;
 char operation;
 while (true){
cout << " Enter value 1 : " ;
cin >> number1;
cout << " Enter value 2 : " ;
cin >> number2;
cout << " Enter Operation(+,*,/,-) : " ;
cin >> operation;
 if ( operation == '+')
 { 
   add(number1,number2);
 }
   if ( operation == '*')
 {
   multiply(number1,number2);
 }
 if ( operation == '-') 
 {
   subtract(number1,number2);
 }
 if ( operation == '/')
 {
  cout << " This can,t be done" << endl;
 } 
 } 
 }
   void add(int number1,int number2)
 {

int sum;
sum=number1+number2;
cout<< " Sum : " << sum << endl;
}
void multiply(int number1,int number2)
{
 int product= number1*number2;
 cout << " Product : " << product<< endl;
}
void subtract(int number1,int number2)
{
int subtraction=number1-number2;
cout << "subtraction : " << subtraction << endl;
}