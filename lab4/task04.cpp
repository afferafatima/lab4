#include<iostream>
using namespace std;
 void iseligible(int age);
main()
{while(true){
int age;
cout << " Enter your age : " ;
     cin >> age ;
iseligible(age);

}
} 
 void iseligible(int age)
 { 
    if(age>=18)
{ cout << " you are eligible to vote." << endl;}
 
if(age<18)
{ cout << " you are not eligible to vote." << endl;}
 
 }  