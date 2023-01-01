#include<iostream>
using namespace std;
void ifpass(int marks);
main()
{
 while (true){
 int marks;
 cout << "Enter your quiz marks : ";
 cin >> marks;
 ifpass(marks);} 
  
}

void ifpass(int marks)
{
  if (marks > 50)
  {
     cout << " You have passed first Quiz of PF" << endl ;
  } 
  if ( marks == 50 )
  {
    cout << " Your barely passed the PF.Work Hard." << endl ; 
  }
  if ( marks < 50 )
  { 
    cout << " You failed first quiz of PF"<< endl ;
  } 
}